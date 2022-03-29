#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Die.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent):
     QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cambl/OneDrive/Documents/PrimeNumber/White_3.png");
    ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Die InitiateDie;
    InitiateDie.setSimulateDie_col();
    InitiateDie.setSimulateDie_no();

    if (InitiateDie.getDiecol() == "Black") {
        if (InitiateDie.getDieno() == 3) {
            QPixmap pix("C:/Users/cambl/OneDrive/Documents/PrimeNumber/Black_3.png");
            ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 5) {
            QPixmap pix("C:/Users/cambl/OneDrive/Documents/PrimeNumber/Black_5.png");
            ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 7){
            QPixmap pix("C:/Users/cambl/OneDrive/Documents/PrimeNumber/Black_7.png");
            ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
    }
    else if (InitiateDie.getDiecol() == "White") {
        if (InitiateDie.getDieno() == 3) {
            QPixmap pix("C:/Users/cambl/OneDrive/Documents/PrimeNumber/White_3.png");
            ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 5) {
            QPixmap pix("C:/Users/cambl/OneDrive/Documents/PrimeNumber/White_5.png");
            ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if (InitiateDie.getDieno() == 7){
            QPixmap pix("C:/Users/cambl/OneDrive/Documents/PrimeNumber/White_7.png");
            ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        }
    }

   //QMessageBox:: about(this, "Dice Roll", "A" "has been rolled!");
    //QMessageBox msgBox;
    //QString Printable = QStringLiteral("A %1 and %2 has been rolled!").arg(InitiateDie.getDieno()).arg(QString::fromStdString(InitiateDie.getDiecol()));
    //msgBox.setText(Printable);
    //msgBox.exec();
}

