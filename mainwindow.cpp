/*
Project Name: Prime Number Football Game
Module Description: Source file containing implementation of the member functions specified in the associated mainwindow header file
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/


#include "mainwindow.h"
#include "Main.h"
#include "ui_mainwindow.h"
#include "Die.h"
#include "Player.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDebug>
#include <string>
#include <vector>
#include <QThread>
#include <QTimer>
#include <iterator>
#include <QApplication>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent): // Constructor
     QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Prime Number Football game"); // Set title
    setWindowIcon(QIcon(":/resources/img/Football.png")); // Set app icon on app launch
    QPixmap pix(":/resources/img/Black_3.png"); // Default Image on app launch
    ui->diePic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));

    mTimer = new QTimer(this); // make a QTimer
    mTimer->setSingleShot(true); // it will fire once after it was started
    connect(mTimer, &QTimer::timeout, this, &MainWindow::valid_check); // connect it to your slot
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Roll_clicked()
{
    QDebug debug = qDebug(); // Create new object called debug of qDebug() class (CONSOLE DEBUGGING)
    debug.noquote(); // Disable quotation marks
    static unsigned int call_count = 0;

    static int DuosWon = 1; static int ScoreOne = 0; static int ScoreTwo = 0;
    QString Winner;

    static Player PlayerOne;
    static Player PlayerTwo;
    static Die InitiateDie;
    InitiateDie.setSimulateDie_col();
    InitiateDie.setSimulateDie_no();

    if (InitiateDie.getDiecol() == "Black") {
        if (InitiateDie.getDieno() == 3) {
            QPixmap pix(":/resources/img/Black_3.png");
            ui->diePic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 5) {
            QPixmap pix(":/resources/img/Black_5.png");
            ui->diePic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 7){
            QPixmap pix(":/resources/img/Black_7.png");
            ui->diePic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
    }
    else if (InitiateDie.getDiecol() == "White") {
        if (InitiateDie.getDieno() == 3) {
            QPixmap pix(":/resources/img/White_3.png");
            ui->diePic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 5) {
            QPixmap pix(":/resources/img/White_5.png");
            ui->diePic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 7){
            QPixmap pix(":/resources/img/White_7.png");
            ui->diePic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
    }
    ui->DieNo_outcome->setText(QString::number(InitiateDie.getDieno())); // Just need a place to store them as labels to be accessed elsewhere...
    ui->DieNo_outcome->hide();
    ui->DieCol_outcome->setText(QString::fromStdString(InitiateDie.getDiecol()));
    ui->DieCol_outcome->hide();
    ui->die_Resultshow->setText(QStringLiteral("A %1 and %2 has been rolled!").arg(InitiateDie.getDieno()).arg(QString::fromStdString(InitiateDie.getDiecol())));

    if (call_count == 0) {
      InitiateDie.setPossession(false); // Initially false.. until first click.
    }

    PlayerOne.setremainder(ui->teamOne_selectedprime->text().toInt(), InitiateDie.getDieno());
    PlayerTwo.setremainder(ui->teamTwo_selectedprime->text().toInt(), InitiateDie.getDieno());
    if (InitiateDie.switchPossession() == false) {
       ui->teamOne_againstGK_kit->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Team_1.png\");}")); // Initially assign pix map
       ui->teamOne_againstGK_kit->setVisible(false); // Initially hide since not up against GK yet

       ui->Ball_One_Scored->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Football.png\");}")); // Initially assign pix map for ball in back of net
       ui->Ball_One_Scored->setVisible(false);

       debug << "(Player 1) You have selected " << ui->teamone_Primesel->text().toInt() << " as your own prime & " << ui->teamtwo_Primesel->text().toInt() << " to tackle!" << "\n";
       debug << "A " << QStringLiteral("%1").arg(InitiateDie.getDieno()) << " & " << QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.getDiecol())) << " has been rolled!" << "\n";
       InitiateDie.compareremainder(ui->counterwins, InitiateDie, ui->teamOne_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder());
       ui->winner_duo->setText(QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.compareremainder(ui->counterwins, InitiateDie,  ui->teamOne_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder()))));
       ui->Ball_one->setVisible(true);
       ui->Ball_one->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Football.png\");}"));
       ui->Ball_two->hide();
       ui->teamTwo_selectedprime->setVisible(true);
       ui->teamOne_selectedprime->setVisible(true); // Show selection for P1
       ui->teamTwo_selectedprime_2->setVisible(false);
       ui->teamOne_selectedprime_2->setVisible(false); // Hide selection for P2

       debug << DuosWon;
       if (DuosWon == ui->NoOfPlayers->text().toInt()) { // Number of players required to beat
           int PrimeAgainstGK = ui->teamOne_selectedprime->text().toInt();

           ui->teamOne_selectedprime_againstGK->setText(QString::number(PrimeAgainstGK)); // Display Prime up against GK
           ui->teamOne_selectedprime_againstGK->setStyleSheet("QLabel { color : white; }"); // White font against black background
           ui->teamOne_againstGK_kit->setVisible(true); // Show the player now that it is up against the prime..
           ui->teamOne_selectedprime_againstGK->setVisible(true);

           debug << "(Player 1) You prime is " << ui->teamOne_selectedprime_againstGK->text().toInt() << " up against GK with prime " << ui->player_teamtwo_gk->text().toInt() << " to shoot against!" << "\n";

           InitiateDie.setSimulateDie_no(); // New Roll of die

           PlayerOne.setremainder(ui->teamOne_selectedprime_againstGK->text().toInt(), InitiateDie.getDieno());
           PlayerTwo.setremainder(ui->player_teamtwo_gk->text().toInt(), InitiateDie.getDieno());

           debug << "A " << QStringLiteral("%1").arg(InitiateDie.getDieno()) << " & " << QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.getDiecol())) << " has been rolled!" << "\n";

           InitiateDie.compareremainder(ui->counterwins, InitiateDie, ui->teamOne_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder());
           ui->winner_duo->setText(QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.compareremainder(ui->counterwins, InitiateDie, ui->teamOne_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder()))));

           if (InitiateDie.switchPossession() == false) { // If possession is still false, i.e., ball is still kept (assume goal is scored).
               debug << DuosWon;
               DuosWon = 1;
               ScoreOne += 1;
               ui->TeamOneScore->setText(QStringLiteral("%1").arg(ScoreOne));
               Winner = ui->teamOne_name->text(); // Assign winner
               QTimer::singleShot(5000, ui->teamOne_selectedprime_againstGK, &QWidget::hide); // Display kit for 3 seconds.
               QTimer::singleShot(5000, ui->teamOne_againstGK_kit, &QWidget::hide); // Display no. for 3 seconds.
               ui->goalScored->setText(QStringLiteral("GOAL SCORED by %1 !!").arg(Winner));
               ui->goalScored->setVisible(true);
               ui->Ball_One_Scored->setVisible(true);
               QTimer::singleShot(5000, ui->Ball_One_Scored, &QWidget::hide); // Show ball for 3 seconds
               QTimer::singleShot(5000, ui->goalScored, &QWidget::hide); // Display message for 3 seconds.
               InitiateDie.setPossession(true); // Possession swapped to other opponent..
           } else {
               DuosWon = 1;
               QTimer::singleShot(5000, ui->teamOne_selectedprime_againstGK, &QWidget::hide); // Display kit for 3 seconds.
               QTimer::singleShot(5000, ui->teamOne_againstGK_kit, &QWidget::hide); // Display no. for 3 seconds.
               ui->goalScored->setText("GK SAVED!!");
               ui->goalScored->setVisible(true);
               QTimer::singleShot(5000, ui->goalScored, &QWidget::hide);
               InitiateDie.setPossession(true); // Possession swapped to other opponent..
           }

       }
    }
    else if (InitiateDie.switchPossession() == true) {
        ui->teamTwo_againstGK_kit->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Team_2.png\");}")); // Initially assign pix map
        ui->teamTwo_againstGK_kit->setVisible(false); // Initially hide since not up against GK yet
        ui->Ball_Two_Scored->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Football.png\");}")); // Initially assign pix map for ball in back of net
        ui->Ball_Two_Scored->setVisible(false);

        debug << "(Player 2) You have selected " << ui->teamone_Primesel->text().toInt() << " as your own prime & " << ui->teamTwo_selectedprime->text().toInt() << " to tackle!" << "\n";
        debug << "A " << QStringLiteral("%1").arg(InitiateDie.getDieno()) << " & " << QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.getDiecol())) << " has been rolled!" << "\n";

        InitiateDie.compareremainder(ui->counterwins,InitiateDie, ui->teamTwo_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder());

        ui->winner_duo->setText(QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.compareremainder(ui->counterwins, InitiateDie, ui->teamTwo_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder()))));

        ui->Ball_two->setVisible(true);
        ui->Ball_two->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Football.png\");}"));
        ui->Ball_one->hide();
        ui->teamTwo_selectedprime->setVisible(false);
        ui->teamOne_selectedprime->setVisible(false); // Hide selection for P1
        ui->teamTwo_selectedprime_2->setVisible(true);
        ui->teamOne_selectedprime_2->setVisible(true); // Show selection for P2
        ui->teamTwo_selectedprime_2->setText(ui->teamone_Primesel->text());
        ui->teamOne_selectedprime_2->setText(ui->teamtwo_Primesel->text()); // Set text for said selection for P2
        ui->teamOne_selectedprime_2->setStyleSheet("QLabel { color : white; }"); // White font against black background

        debug << DuosWon;
        if (DuosWon == ui->NoOfPlayers->text().toInt()) { // Number of players required to beat
            int PrimeAgainstGK = ui->teamTwo_selectedprime->text().toInt();

            ui->teamTwo_selectedprime_againstGK->setText(QString::number(PrimeAgainstGK)); // Display Prime up against GK
            ui->teamTwo_againstGK_kit->setVisible(true); // Show the player now that it is up against the prime..
            ui->teamTwo_selectedprime_againstGK->setVisible(true);

            debug << "(Player 1) You prime is " << ui->teamTwo_selectedprime_againstGK->text().toInt() << " up against GK with prime " << ui->player_teamone_gk->text().toInt() << " to shoot against!" << "\n";

            InitiateDie.setSimulateDie_no(); // New Roll of die

            PlayerOne.setremainder(ui->teamTwo_selectedprime_againstGK->text().toInt(), InitiateDie.getDieno());
            PlayerTwo.setremainder(ui->player_teamone_gk->text().toInt(), InitiateDie.getDieno());

            debug << "A " << QStringLiteral("%1").arg(InitiateDie.getDieno()) << " & " << QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.getDiecol())) << " has been rolled!" << "\n";
            InitiateDie.compareremainder(ui->counterwins,InitiateDie, ui->teamTwo_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder());

            ui->winner_duo->setText(QStringLiteral("%1").arg(QString::fromStdString(InitiateDie.compareremainder(ui->counterwins,InitiateDie, ui->teamTwo_name->text().toStdString(), PlayerOne.getRemainder(), PlayerTwo.getRemainder()))));

            if (InitiateDie.switchPossession() == false) { // If possession is still false, i.e., ball is still kept (assume goal is scored).
                debug << DuosWon;
                DuosWon = 1;
                ScoreTwo += 1;
                Winner = ui->teamTwo_name->text(); // Assign winner at the moment in time
                ui->TeamTwoScore->setText(QStringLiteral("%1").arg(ScoreTwo));
                QTimer::singleShot(5000, ui->teamTwo_selectedprime_againstGK, &QWidget::hide); // Display kit for 3 seconds.
                QTimer::singleShot(5000, ui->teamTwo_againstGK_kit, &QWidget::hide); // Display no. for 3 seconds.
                ui->goalScored->setText(QStringLiteral("GOAL SCORED by %1 !!").arg(Winner));
                ui->goalScored->setVisible(true);
                QTimer::singleShot(5000, ui->goalScored, &QWidget::hide); // Display message for 3 seconds.
                ui->Ball_Two_Scored->setVisible(true);
                QTimer::singleShot(5000, ui->Ball_Two_Scored, &QWidget::hide); // Show ball for 3 seconds
                InitiateDie.setPossession(true); // Possession swapped to other opponent..
            } else {
                DuosWon = 1; // Reset back to zero as possession lost, need to win in succession as per specs.
                QTimer::singleShot(5000, ui->teamTwo_selectedprime_againstGK, &QWidget::hide); // Display kit for 3 seconds.
                QTimer::singleShot(5000, ui->teamTwo_againstGK_kit, &QWidget::hide); // Display no. for 3 seconds.
                ui->goalScored->setText("GK SAVED!!");
                ui->goalScored->setVisible(true);
                QTimer::singleShot(5000, ui->goalScored, &QWidget::hide);
                InitiateDie.setPossession(true); // Possession swapped to other opponent..
            }
        }    
        if (InitiateDie.switchPossession() == false) {
            InitiateDie.setPossession(true);
        }
        else InitiateDie.setPossession(false);
    }
        if (ui->counterwins->text() == "won") {
            DuosWon += 1;
        }
        else if (ui->counterwins->text() == "lost") {
            DuosWon = 1;
        }
    call_count++; // Determine number of clicks.
    if (ui->TeamOneScore->text().toInt() == 3 || ui->TeamTwoScore->text().toInt() == 3) { // Game over condition
        QMessageBox::StandardButton reply = QMessageBox::question( // Returning the reply in the form of standard button class
                              this, "Game over!", QStringLiteral("%1 won the game! Would you like to play again (Yes) or quit (No)?").arg(Winner),
                              QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            qApp->quit(); // Restart application
            QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
        } else {
            this->close(); // Close application
        }
    }
}

void MainWindow::on_pushButton_ShowInfo_clicked()
{
    struct text show; // Create object called show of text structure
    std::string msg;

    for (int i = 0; i < std::size(show.abstract); i++) { // Print opening abstract
        std:: string s = show.abstract[i];
        msg.append(s);
        msg.append("\n");
    }
    QMessageBox::information(this, "What is this game about?",msg.c_str());
}
// FUNCTION TO START GAME AND CONNECT SINGALS AND SLOTS
void MainWindow::on_pushButton_Start_clicked()
{
    enterPlayerDialogue = new EnterPlayerDialogue(this); // New instance of second dialogue, this (main window class)
    enterPlayerDialogue->show(); // Modeless approach
    ui->pushButton_Start->setEnabled(false);
    // CONNECT SIGNALS AND SLOTS FOR TEAM 1 ENTERING PRIMES
    connect(enterPlayerDialogue, SIGNAL(send_teamone_1(QString)), this, SLOT(receive_teamone_1(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_2(QString)), this, SLOT(receive_teamone_2(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_3(QString)), this, SLOT(receive_teamone_3(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_4(QString)), this, SLOT(receive_teamone_4(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_5(QString)), this, SLOT(receive_teamone_5(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_6(QString)), this, SLOT(receive_teamone_6(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_7(QString)), this, SLOT(receive_teamone_7(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_8(QString)), this, SLOT(receive_teamone_8(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_9(QString)), this, SLOT(receive_teamone_9(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamone_10(QString)), this, SLOT(receive_teamone_10(QString)));

    // CONNECT SIGNALS AND SLOTS FOR TEAM 2 ENTERING PRIMES
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_1(QString)), this, SLOT(receive_teamtwo_1(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_2(QString)), this, SLOT(receive_teamtwo_2(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_3(QString)), this, SLOT(receive_teamtwo_3(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_4(QString)), this, SLOT(receive_teamtwo_4(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_5(QString)), this, SLOT(receive_teamtwo_5(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_6(QString)), this, SLOT(receive_teamtwo_6(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_7(QString)), this, SLOT(receive_teamtwo_7(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_8(QString)), this, SLOT(receive_teamtwo_8(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_9(QString)), this, SLOT(receive_teamtwo_9(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_10(QString)), this, SLOT(receive_teamtwo_10(QString)));

    // CONNECT SIGNALS AND SLOTS FOR TEAM ENTERING NAMES
    connect(enterPlayerDialogue, SIGNAL(send_teamone_name(QString)), this, SLOT(receive_teamOne_name(QString)));
    connect(enterPlayerDialogue, SIGNAL(send_teamtwo_name(QString)), this, SLOT(receive_teamTwo_name(QString)));

    // CONNECT SIGNALS AND SLOTS FOR NUMBER OF PLAYERS ENTERED
    connect(enterPlayerDialogue, SIGNAL(send_Team_player_count(QString)), this, SLOT(receive_Team_player_count(QString)));

    Player setGK_one;
    Player setGK_two;

    setGK_one.setGoalkeeper();
    setGK_two.setGoalkeeper();
    ui->player_teamone_gk->setText(QString::number(setGK_one.getGoalkeeper()));
    ui->player_teamone_gk->setStyleSheet("QLabel { color : white; }"); // White font against black background
    ui->player_teamtwo_gk->setText(QString::number(setGK_two.getGoalkeeper()));
}
// FUNCTION TO DISPLAY KIT COLOUR AND PRIME NUMBER
void MainWindow::setDisplay(QLabel* primeDisplay, QLabel* kitDisplay, QString primeNo, bool isTeam2) { // Pointer  parameter..
    if (primeNo.toInt() != 0) { // Show if it is not empty field...
        primeDisplay->setText(primeNo);
        primeDisplay->setVisible(true);
        if (isTeam2 == false) {
            primeDisplay->setStyleSheet("QLabel { color : white; }"); // White font against black background
            kitDisplay->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Team_1.png\");}"));
        } else { // Display other kit colour
            kitDisplay->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Team_2.png\");}"));
        }
        kitDisplay->setVisible(true);
    }
    else { primeDisplay->hide(); kitDisplay->hide(); } // Else hide the kit and number
}

// SLOTS FOR TEAM 1 FROM ENTERED SIGNAL
void MainWindow::receive_teamone_1(QString teamone_no1){
    setDisplay(ui->player_teamone_1,ui->teamOnekit_1,teamone_no1, false);
}

void MainWindow::receive_teamone_2(QString teamone_no2){
    setDisplay(ui->player_teamone_2,ui->teamOnekit_2,teamone_no2, false);
}
void MainWindow::receive_teamone_3(QString teamone_no3){
    setDisplay(ui->player_teamone_3,ui->teamOnekit_3,teamone_no3, false);
}

void MainWindow::receive_teamone_4(QString teamone_no4){
    setDisplay(ui->player_teamone_4,ui->teamOnekit_4,teamone_no4, false);
}

void MainWindow::receive_teamone_5(QString teamone_no5){
    setDisplay(ui->player_teamone_5,ui->teamOnekit_5,teamone_no5, false);
}

void MainWindow::receive_teamone_6(QString teamone_no6){
    setDisplay(ui->player_teamone_6,ui->teamOnekit_6,teamone_no6, false);
}

void MainWindow::receive_teamone_7(QString teamone_no7){
    setDisplay(ui->player_teamone_7,ui->teamOnekit_7,teamone_no7, false);
}

void MainWindow::receive_teamone_8(QString teamone_no8){
    setDisplay(ui->player_teamone_8,ui->teamOnekit_8,teamone_no8, false);
}

void MainWindow::receive_teamone_9(QString teamone_no9){
    setDisplay(ui->player_teamone_9,ui->teamOnekit_9,teamone_no9, false);
}

void MainWindow::receive_teamone_10(QString teamone_no10){
    setDisplay(ui->player_teamone_10,ui->teamOnekit_10,teamone_no10, false);
}

// SLOTS FOR TEAM 2 FROM ENTER SIGNAL
void MainWindow::receive_teamtwo_1(QString teamtwo_no1){
    setDisplay(ui->player_teamtwo_1,ui->teamTwokit_1,teamtwo_no1, true); // True since it's now team 2
}

void MainWindow::receive_teamtwo_2(QString teamtwo_no2){
    setDisplay(ui->player_teamtwo_2,ui->teamTwokit_2,teamtwo_no2, true);
}

void MainWindow::receive_teamtwo_3(QString teamtwo_no3){
    setDisplay(ui->player_teamtwo_3,ui->teamTwokit_3,teamtwo_no3, true);
}

void MainWindow::receive_teamtwo_4(QString teamtwo_no4){
    setDisplay(ui->player_teamtwo_4,ui->teamTwokit_4,teamtwo_no4, true);
}

void MainWindow::receive_teamtwo_5(QString teamtwo_no5){
    setDisplay(ui->player_teamtwo_5,ui->teamTwokit_5,teamtwo_no5, true);
}

void MainWindow::receive_teamtwo_6(QString teamtwo_no6){
    setDisplay(ui->player_teamtwo_6,ui->teamTwokit_6,teamtwo_no6, true);
}

void MainWindow::receive_teamtwo_7(QString teamtwo_no7){
    setDisplay(ui->player_teamtwo_7,ui->teamTwokit_7,teamtwo_no7, true);
}

void MainWindow::receive_teamtwo_8(QString teamtwo_no8){
    setDisplay(ui->player_teamtwo_8,ui->teamTwokit_8,teamtwo_no8, true);
}

void MainWindow::receive_teamtwo_9(QString teamtwo_no9){
    setDisplay(ui->player_teamtwo_9,ui->teamTwokit_9,teamtwo_no9, true);
}

void MainWindow::receive_teamtwo_10(QString teamtwo_no10){
    setDisplay(ui->player_teamtwo_10,ui->teamTwokit_10,teamtwo_no10, true);
}

// Set team names
void MainWindow::receive_teamOne_name(QString teamOne_name){
    ui->teamOne_name->setText(teamOne_name);
    ui->teamOne_name->setVisible(true);
}

void MainWindow::receive_teamTwo_name(QString teamTwo_name){
    ui->teamTwo_name->setText(teamTwo_name);
    ui->teamTwo_name->setVisible(true);
}

// Receive no. of players for each team
void MainWindow::receive_Team_player_count(QString teamPlayerCount){
    ui->NoOfPlayers->setText(teamPlayerCount);
}

void MainWindow::on_pushButton_Quit_clicked()
{
    this->close();
}

void MainWindow::on_teamone_Primesel_textEdited(const QString &arg1)
{
    mTimer->start(2000); // This will fire do_query after 100msec.
    // If user would enter something before it fires, the timer restarts

    int tempPrimeSel_One = arg1.toInt(); // Set temp prime to evaluate....
    if (tempPrimeSel_One != 0) {

    ui->teamOne_selectedprime->setStyleSheet("QLabel { color : white; }");
    ui->teamOne_selectedprime->setText(arg1);
    ui->teamOne_selectedkit->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Team_1.png\");}"));
    ui->teamOne_selectedkit->setVisible(true);
    } else {
        ui->teamOne_selectedprime->hide(); ui->teamOne_selectedkit->hide();
    }

}

void MainWindow::on_teamtwo_Primesel_textEdited(const QString &arg1)
{
    mTimer->start(2000); // Give the user the chance during entering process..
    int tempPrimeSel_Two = arg1.toInt(); // Set temp prime to evaluate....
    if (tempPrimeSel_Two != 0) {
    ui->teamTwo_selectedprime->setText(arg1);
    ui->teamTwo_selectedkit->setStyleSheet(QString("QLabel {border-image: url(\":/resources/img/Team_2.png\");}"));
    ui->teamTwo_selectedkit->setVisible(true);
    } else {
        ui->teamTwo_selectedprime->hide(); ui->teamTwo_selectedkit->hide();
    }
}

void MainWindow::valid_check()
{
    int selOne = ui->teamone_Primesel->text().toInt();
    int selTwo = ui->teamtwo_Primesel->text().toInt();
    if (selOne != ui->player_teamone_1->text().toInt() && selOne != ui->player_teamone_2->text().toInt() && selOne != ui->player_teamone_3->text().toInt()
        && selOne != ui->player_teamone_4->text().toInt() && selOne != ui->player_teamone_5->text().toInt() && selOne != ui->player_teamone_6->text().toInt()
        && selOne != ui->player_teamone_7->text().toInt() && selOne != ui->player_teamone_8->text().toInt() && selOne != ui->player_teamone_9->text().toInt()
        && selOne != ui->player_teamone_10->text().toInt() || selOne == 0) {
        QMessageBox::warning(this, "No matching prime","Prime does not match that of the prime you have selected or nothing has been selected (Team 1).");
    }
    if (selTwo != ui->player_teamtwo_1->text().toInt() && selTwo != ui->player_teamtwo_2->text().toInt() && selTwo != ui->player_teamtwo_3->text().toInt()
        && selTwo != ui->player_teamtwo_4->text().toInt() && selTwo != ui->player_teamtwo_5->text().toInt() && selTwo != ui->player_teamtwo_6->text().toInt()
        && selTwo != ui->player_teamtwo_7->text().toInt() && selTwo != ui->player_teamtwo_8->text().toInt() && selTwo != ui->player_teamtwo_9->text().toInt()
        && selTwo != ui->player_teamtwo_10->text().toInt() || selTwo == 0) {
        QMessageBox::warning(this, "No matching prime","Prime does not match that of the prime you have selected or nothing has been selected (Team 2).");
    }
}
