/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_ShowInfo;
    QWidget *layoutWidget;
    QVBoxLayout *Die;
    QPushButton *pushButton_Roll;
    QLabel *diePic;
    QLabel *die_Resultshow;
    QLabel *player_teamone_1;
    QLabel *player_teamone_2;
    QLabel *player_teamone_3;
    QLabel *player_teamone_4;
    QLabel *player_teamone_5;
    QLabel *player_teamone_6;
    QLabel *player_teamone_7;
    QLabel *player_teamone_8;
    QLabel *player_teamone_9;
    QLabel *player_teamone_10;
    QLabel *player_teamone_gk;
    QLabel *player_teamtwo_1;
    QLabel *player_teamtwo_2;
    QLabel *player_teamtwo_3;
    QLabel *player_teamtwo_4;
    QLabel *player_teamtwo_5;
    QLabel *player_teamtwo_6;
    QLabel *player_teamtwo_7;
    QLabel *player_teamtwo_8;
    QLabel *player_teamtwo_9;
    QLabel *player_teamtwo_10;
    QLabel *player_teamtwo_gk;
    QLabel *teamOnekit_1;
    QLabel *teamOnekit_2;
    QLabel *teamOnekit_3;
    QLabel *teamOnekit_4;
    QLabel *teamOnekit_5;
    QLabel *teamOnekit_6;
    QLabel *teamOnekit_7;
    QLabel *teamOnekit_8;
    QLabel *teamOnekit_9;
    QLabel *teamOnekit_10;
    QLabel *teamOnekit_gk;
    QLabel *teamTwokit_1;
    QLabel *teamTwokit_2;
    QLabel *teamTwokit_3;
    QLabel *teamTwokit_4;
    QLabel *teamTwokit_5;
    QLabel *teamTwokit_6;
    QLabel *teamTwokit_7;
    QLabel *teamTwokit_8;
    QLabel *teamTwokit_9;
    QLabel *teamTwokit_10;
    QLabel *teamTwokit_gk;
    QLabel *pitchDisplay;
    QLabel *teamOne_selectedkit;
    QLabel *teamTwo_selectedkit;
    QLabel *teamOne_selectedprime;
    QLabel *teamTwo_selectedprime;
    QWidget *layoutWidget1;
    QHBoxLayout *GameControl;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Quit;
    QLabel *winner_duo;
    QWidget *layoutWidget2;
    QVBoxLayout *P1SelectPrimes_2;
    QHBoxLayout *horizontalLayout;
    QLabel *P1SelectPrimes;
    QHBoxLayout *EnterBoxes;
    QLineEdit *teamone_Primesel;
    QLineEdit *teamtwo_Primesel;
    QLabel *DieNo_outcome;
    QLabel *DieCol_outcome;
    QLabel *Ball_one;
    QLabel *Ball_two;
    QLabel *teamTwo_selectedprime_2;
    QLabel *teamOne_selectedprime_2;
    QLabel *teamOne_againstGK_kit;
    QLabel *teamTwo_againstGK_kit;
    QLabel *teamTwo_selectedprime_againstGK;
    QLabel *teamOne_selectedprime_againstGK;
    QLabel *goalScored;
    QLabel *firstto3;
    QLabel *Ball_One_Scored;
    QLabel *Ball_Two_Scored;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TeamOneScore;
    QSpacerItem *horizontalSpacer;
    QLabel *Dash;
    QSpacerItem *horizontalSpacer_2;
    QLabel *TeamTwoScore;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *teamOne_name;
    QSpacerItem *horizontalSpacer_3;
    QLabel *teamTwo_name;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *NoOfPlayers;
    QLabel *playercountDisplay;
    QLabel *counterwins;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(929, 549);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_ShowInfo = new QPushButton(centralwidget);
        pushButton_ShowInfo->setObjectName(QString::fromUtf8("pushButton_ShowInfo"));
        pushButton_ShowInfo->setGeometry(QRect(800, 480, 101, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(780, 20, 131, 181));
        Die = new QVBoxLayout(layoutWidget);
        Die->setObjectName(QString::fromUtf8("Die"));
        Die->setContentsMargins(0, 0, 0, 0);
        pushButton_Roll = new QPushButton(layoutWidget);
        pushButton_Roll->setObjectName(QString::fromUtf8("pushButton_Roll"));

        Die->addWidget(pushButton_Roll);

        diePic = new QLabel(layoutWidget);
        diePic->setObjectName(QString::fromUtf8("diePic"));

        Die->addWidget(diePic);

        die_Resultshow = new QLabel(layoutWidget);
        die_Resultshow->setObjectName(QString::fromUtf8("die_Resultshow"));
        die_Resultshow->setWordWrap(true);

        Die->addWidget(die_Resultshow);

        player_teamone_1 = new QLabel(centralwidget);
        player_teamone_1->setObjectName(QString::fromUtf8("player_teamone_1"));
        player_teamone_1->setGeometry(QRect(180, 140, 41, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        player_teamone_1->setFont(font);
        player_teamone_2 = new QLabel(centralwidget);
        player_teamone_2->setObjectName(QString::fromUtf8("player_teamone_2"));
        player_teamone_2->setGeometry(QRect(250, 140, 41, 41));
        player_teamone_2->setFont(font);
        player_teamone_3 = new QLabel(centralwidget);
        player_teamone_3->setObjectName(QString::fromUtf8("player_teamone_3"));
        player_teamone_3->setGeometry(QRect(180, 200, 41, 41));
        player_teamone_3->setFont(font);
        player_teamone_4 = new QLabel(centralwidget);
        player_teamone_4->setObjectName(QString::fromUtf8("player_teamone_4"));
        player_teamone_4->setGeometry(QRect(250, 200, 41, 41));
        player_teamone_4->setFont(font);
        player_teamone_5 = new QLabel(centralwidget);
        player_teamone_5->setObjectName(QString::fromUtf8("player_teamone_5"));
        player_teamone_5->setGeometry(QRect(180, 260, 41, 41));
        player_teamone_5->setFont(font);
        player_teamone_6 = new QLabel(centralwidget);
        player_teamone_6->setObjectName(QString::fromUtf8("player_teamone_6"));
        player_teamone_6->setGeometry(QRect(250, 260, 41, 41));
        player_teamone_6->setFont(font);
        player_teamone_7 = new QLabel(centralwidget);
        player_teamone_7->setObjectName(QString::fromUtf8("player_teamone_7"));
        player_teamone_7->setGeometry(QRect(180, 320, 41, 41));
        player_teamone_7->setFont(font);
        player_teamone_8 = new QLabel(centralwidget);
        player_teamone_8->setObjectName(QString::fromUtf8("player_teamone_8"));
        player_teamone_8->setGeometry(QRect(250, 320, 41, 41));
        player_teamone_8->setFont(font);
        player_teamone_9 = new QLabel(centralwidget);
        player_teamone_9->setObjectName(QString::fromUtf8("player_teamone_9"));
        player_teamone_9->setGeometry(QRect(180, 380, 41, 41));
        player_teamone_9->setFont(font);
        player_teamone_10 = new QLabel(centralwidget);
        player_teamone_10->setObjectName(QString::fromUtf8("player_teamone_10"));
        player_teamone_10->setGeometry(QRect(250, 380, 41, 41));
        player_teamone_10->setFont(font);
        player_teamone_gk = new QLabel(centralwidget);
        player_teamone_gk->setObjectName(QString::fromUtf8("player_teamone_gk"));
        player_teamone_gk->setGeometry(QRect(40, 290, 41, 41));
        player_teamone_gk->setFont(font);
        player_teamtwo_1 = new QLabel(centralwidget);
        player_teamtwo_1->setObjectName(QString::fromUtf8("player_teamtwo_1"));
        player_teamtwo_1->setGeometry(QRect(480, 140, 41, 41));
        player_teamtwo_1->setFont(font);
        player_teamtwo_2 = new QLabel(centralwidget);
        player_teamtwo_2->setObjectName(QString::fromUtf8("player_teamtwo_2"));
        player_teamtwo_2->setGeometry(QRect(550, 140, 41, 41));
        player_teamtwo_2->setFont(font);
        player_teamtwo_3 = new QLabel(centralwidget);
        player_teamtwo_3->setObjectName(QString::fromUtf8("player_teamtwo_3"));
        player_teamtwo_3->setGeometry(QRect(480, 200, 41, 41));
        player_teamtwo_3->setFont(font);
        player_teamtwo_4 = new QLabel(centralwidget);
        player_teamtwo_4->setObjectName(QString::fromUtf8("player_teamtwo_4"));
        player_teamtwo_4->setGeometry(QRect(550, 200, 41, 41));
        player_teamtwo_4->setFont(font);
        player_teamtwo_5 = new QLabel(centralwidget);
        player_teamtwo_5->setObjectName(QString::fromUtf8("player_teamtwo_5"));
        player_teamtwo_5->setGeometry(QRect(480, 260, 41, 41));
        player_teamtwo_5->setFont(font);
        player_teamtwo_6 = new QLabel(centralwidget);
        player_teamtwo_6->setObjectName(QString::fromUtf8("player_teamtwo_6"));
        player_teamtwo_6->setGeometry(QRect(550, 260, 41, 41));
        player_teamtwo_6->setFont(font);
        player_teamtwo_7 = new QLabel(centralwidget);
        player_teamtwo_7->setObjectName(QString::fromUtf8("player_teamtwo_7"));
        player_teamtwo_7->setGeometry(QRect(480, 320, 41, 41));
        player_teamtwo_7->setFont(font);
        player_teamtwo_8 = new QLabel(centralwidget);
        player_teamtwo_8->setObjectName(QString::fromUtf8("player_teamtwo_8"));
        player_teamtwo_8->setGeometry(QRect(550, 320, 41, 41));
        player_teamtwo_8->setFont(font);
        player_teamtwo_9 = new QLabel(centralwidget);
        player_teamtwo_9->setObjectName(QString::fromUtf8("player_teamtwo_9"));
        player_teamtwo_9->setGeometry(QRect(480, 380, 41, 41));
        player_teamtwo_9->setFont(font);
        player_teamtwo_10 = new QLabel(centralwidget);
        player_teamtwo_10->setObjectName(QString::fromUtf8("player_teamtwo_10"));
        player_teamtwo_10->setGeometry(QRect(550, 380, 41, 41));
        player_teamtwo_10->setFont(font);
        player_teamtwo_gk = new QLabel(centralwidget);
        player_teamtwo_gk->setObjectName(QString::fromUtf8("player_teamtwo_gk"));
        player_teamtwo_gk->setGeometry(QRect(690, 290, 41, 41));
        player_teamtwo_gk->setFont(font);
        teamOnekit_1 = new QLabel(centralwidget);
        teamOnekit_1->setObjectName(QString::fromUtf8("teamOnekit_1"));
        teamOnekit_1->setGeometry(QRect(160, 130, 60, 60));
        teamOnekit_1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_1->setScaledContents(true);
        teamOnekit_1->setWordWrap(false);
        teamOnekit_2 = new QLabel(centralwidget);
        teamOnekit_2->setObjectName(QString::fromUtf8("teamOnekit_2"));
        teamOnekit_2->setGeometry(QRect(230, 130, 60, 60));
        teamOnekit_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_2->setScaledContents(true);
        teamOnekit_2->setWordWrap(false);
        teamOnekit_3 = new QLabel(centralwidget);
        teamOnekit_3->setObjectName(QString::fromUtf8("teamOnekit_3"));
        teamOnekit_3->setGeometry(QRect(160, 190, 60, 60));
        teamOnekit_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_3->setScaledContents(true);
        teamOnekit_3->setWordWrap(false);
        teamOnekit_4 = new QLabel(centralwidget);
        teamOnekit_4->setObjectName(QString::fromUtf8("teamOnekit_4"));
        teamOnekit_4->setGeometry(QRect(230, 190, 60, 60));
        teamOnekit_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_4->setScaledContents(true);
        teamOnekit_4->setWordWrap(false);
        teamOnekit_5 = new QLabel(centralwidget);
        teamOnekit_5->setObjectName(QString::fromUtf8("teamOnekit_5"));
        teamOnekit_5->setGeometry(QRect(160, 250, 60, 60));
        teamOnekit_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_5->setScaledContents(true);
        teamOnekit_5->setWordWrap(false);
        teamOnekit_6 = new QLabel(centralwidget);
        teamOnekit_6->setObjectName(QString::fromUtf8("teamOnekit_6"));
        teamOnekit_6->setGeometry(QRect(230, 250, 60, 60));
        teamOnekit_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_6->setScaledContents(true);
        teamOnekit_6->setWordWrap(false);
        teamOnekit_7 = new QLabel(centralwidget);
        teamOnekit_7->setObjectName(QString::fromUtf8("teamOnekit_7"));
        teamOnekit_7->setGeometry(QRect(160, 310, 60, 60));
        teamOnekit_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_7->setScaledContents(true);
        teamOnekit_7->setWordWrap(false);
        teamOnekit_8 = new QLabel(centralwidget);
        teamOnekit_8->setObjectName(QString::fromUtf8("teamOnekit_8"));
        teamOnekit_8->setGeometry(QRect(230, 310, 60, 60));
        teamOnekit_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_8->setScaledContents(true);
        teamOnekit_8->setWordWrap(false);
        teamOnekit_9 = new QLabel(centralwidget);
        teamOnekit_9->setObjectName(QString::fromUtf8("teamOnekit_9"));
        teamOnekit_9->setGeometry(QRect(160, 370, 60, 60));
        teamOnekit_9->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_9->setScaledContents(true);
        teamOnekit_9->setWordWrap(false);
        teamOnekit_10 = new QLabel(centralwidget);
        teamOnekit_10->setObjectName(QString::fromUtf8("teamOnekit_10"));
        teamOnekit_10->setGeometry(QRect(230, 370, 60, 60));
        teamOnekit_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_10->setScaledContents(true);
        teamOnekit_10->setWordWrap(false);
        teamOnekit_gk = new QLabel(centralwidget);
        teamOnekit_gk->setObjectName(QString::fromUtf8("teamOnekit_gk"));
        teamOnekit_gk->setGeometry(QRect(20, 280, 60, 60));
        teamOnekit_gk->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_1.png")));
        teamOnekit_gk->setScaledContents(true);
        teamOnekit_gk->setWordWrap(false);
        teamTwokit_1 = new QLabel(centralwidget);
        teamTwokit_1->setObjectName(QString::fromUtf8("teamTwokit_1"));
        teamTwokit_1->setGeometry(QRect(460, 130, 60, 60));
        teamTwokit_1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_1->setScaledContents(true);
        teamTwokit_1->setWordWrap(false);
        teamTwokit_2 = new QLabel(centralwidget);
        teamTwokit_2->setObjectName(QString::fromUtf8("teamTwokit_2"));
        teamTwokit_2->setGeometry(QRect(530, 130, 60, 60));
        teamTwokit_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_2->setScaledContents(true);
        teamTwokit_2->setWordWrap(false);
        teamTwokit_3 = new QLabel(centralwidget);
        teamTwokit_3->setObjectName(QString::fromUtf8("teamTwokit_3"));
        teamTwokit_3->setGeometry(QRect(460, 190, 60, 60));
        teamTwokit_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_3->setScaledContents(true);
        teamTwokit_3->setWordWrap(false);
        teamTwokit_4 = new QLabel(centralwidget);
        teamTwokit_4->setObjectName(QString::fromUtf8("teamTwokit_4"));
        teamTwokit_4->setGeometry(QRect(530, 190, 60, 60));
        teamTwokit_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_4->setScaledContents(true);
        teamTwokit_4->setWordWrap(false);
        teamTwokit_5 = new QLabel(centralwidget);
        teamTwokit_5->setObjectName(QString::fromUtf8("teamTwokit_5"));
        teamTwokit_5->setGeometry(QRect(460, 250, 60, 60));
        teamTwokit_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_5->setScaledContents(true);
        teamTwokit_5->setWordWrap(false);
        teamTwokit_6 = new QLabel(centralwidget);
        teamTwokit_6->setObjectName(QString::fromUtf8("teamTwokit_6"));
        teamTwokit_6->setGeometry(QRect(530, 250, 60, 60));
        teamTwokit_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_6->setScaledContents(true);
        teamTwokit_6->setWordWrap(false);
        teamTwokit_7 = new QLabel(centralwidget);
        teamTwokit_7->setObjectName(QString::fromUtf8("teamTwokit_7"));
        teamTwokit_7->setGeometry(QRect(460, 310, 60, 60));
        teamTwokit_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_7->setScaledContents(true);
        teamTwokit_7->setWordWrap(false);
        teamTwokit_8 = new QLabel(centralwidget);
        teamTwokit_8->setObjectName(QString::fromUtf8("teamTwokit_8"));
        teamTwokit_8->setGeometry(QRect(530, 310, 60, 60));
        teamTwokit_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_8->setScaledContents(true);
        teamTwokit_8->setWordWrap(false);
        teamTwokit_9 = new QLabel(centralwidget);
        teamTwokit_9->setObjectName(QString::fromUtf8("teamTwokit_9"));
        teamTwokit_9->setGeometry(QRect(460, 370, 60, 60));
        teamTwokit_9->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_9->setScaledContents(true);
        teamTwokit_9->setWordWrap(false);
        teamTwokit_10 = new QLabel(centralwidget);
        teamTwokit_10->setObjectName(QString::fromUtf8("teamTwokit_10"));
        teamTwokit_10->setGeometry(QRect(530, 370, 60, 60));
        teamTwokit_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_10->setScaledContents(true);
        teamTwokit_10->setWordWrap(false);
        teamTwokit_gk = new QLabel(centralwidget);
        teamTwokit_gk->setObjectName(QString::fromUtf8("teamTwokit_gk"));
        teamTwokit_gk->setGeometry(QRect(670, 280, 60, 60));
        teamTwokit_gk->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Team_2.png")));
        teamTwokit_gk->setScaledContents(true);
        teamTwokit_gk->setWordWrap(false);
        pitchDisplay = new QLabel(centralwidget);
        pitchDisplay->setObjectName(QString::fromUtf8("pitchDisplay"));
        pitchDisplay->setGeometry(QRect(20, 110, 711, 401));
        pitchDisplay->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Pitch.png")));
        pitchDisplay->setScaledContents(true);
        teamOne_selectedkit = new QLabel(centralwidget);
        teamOne_selectedkit->setObjectName(QString::fromUtf8("teamOne_selectedkit"));
        teamOne_selectedkit->setGeometry(QRect(310, 280, 60, 60));
        teamOne_selectedkit->setScaledContents(true);
        teamOne_selectedkit->setWordWrap(false);
        teamTwo_selectedkit = new QLabel(centralwidget);
        teamTwo_selectedkit->setObjectName(QString::fromUtf8("teamTwo_selectedkit"));
        teamTwo_selectedkit->setGeometry(QRect(380, 280, 60, 60));
        teamTwo_selectedkit->setScaledContents(true);
        teamTwo_selectedkit->setWordWrap(false);
        teamOne_selectedprime = new QLabel(centralwidget);
        teamOne_selectedprime->setObjectName(QString::fromUtf8("teamOne_selectedprime"));
        teamOne_selectedprime->setGeometry(QRect(330, 290, 41, 41));
        teamOne_selectedprime->setFont(font);
        teamTwo_selectedprime = new QLabel(centralwidget);
        teamTwo_selectedprime->setObjectName(QString::fromUtf8("teamTwo_selectedprime"));
        teamTwo_selectedprime->setGeometry(QRect(400, 290, 41, 41));
        teamTwo_selectedprime->setFont(font);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 40, 181, 31));
        GameControl = new QHBoxLayout(layoutWidget1);
        GameControl->setObjectName(QString::fromUtf8("GameControl"));
        GameControl->setContentsMargins(0, 0, 0, 0);
        pushButton_Start = new QPushButton(layoutWidget1);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));

        GameControl->addWidget(pushButton_Start);

        pushButton_Quit = new QPushButton(layoutWidget1);
        pushButton_Quit->setObjectName(QString::fromUtf8("pushButton_Quit"));

        GameControl->addWidget(pushButton_Quit);

        winner_duo = new QLabel(centralwidget);
        winner_duo->setObjectName(QString::fromUtf8("winner_duo"));
        winner_duo->setGeometry(QRect(50, 500, 651, 31));
        QFont font1;
        font1.setPointSize(8);
        winner_duo->setFont(font1);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(260, 20, 226, 51));
        P1SelectPrimes_2 = new QVBoxLayout(layoutWidget2);
        P1SelectPrimes_2->setObjectName(QString::fromUtf8("P1SelectPrimes_2"));
        P1SelectPrimes_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        P1SelectPrimes = new QLabel(layoutWidget2);
        P1SelectPrimes->setObjectName(QString::fromUtf8("P1SelectPrimes"));

        horizontalLayout->addWidget(P1SelectPrimes);


        P1SelectPrimes_2->addLayout(horizontalLayout);

        EnterBoxes = new QHBoxLayout();
        EnterBoxes->setObjectName(QString::fromUtf8("EnterBoxes"));
        teamone_Primesel = new QLineEdit(layoutWidget2);
        teamone_Primesel->setObjectName(QString::fromUtf8("teamone_Primesel"));

        EnterBoxes->addWidget(teamone_Primesel);

        teamtwo_Primesel = new QLineEdit(layoutWidget2);
        teamtwo_Primesel->setObjectName(QString::fromUtf8("teamtwo_Primesel"));

        EnterBoxes->addWidget(teamtwo_Primesel);


        P1SelectPrimes_2->addLayout(EnterBoxes);

        DieNo_outcome = new QLabel(centralwidget);
        DieNo_outcome->setObjectName(QString::fromUtf8("DieNo_outcome"));
        DieNo_outcome->setGeometry(QRect(800, 210, 49, 16));
        DieCol_outcome = new QLabel(centralwidget);
        DieCol_outcome->setObjectName(QString::fromUtf8("DieCol_outcome"));
        DieCol_outcome->setGeometry(QRect(850, 210, 49, 16));
        Ball_one = new QLabel(centralwidget);
        Ball_one->setObjectName(QString::fromUtf8("Ball_one"));
        Ball_one->setGeometry(QRect(340, 320, 21, 21));
        Ball_one->setScaledContents(true);
        Ball_two = new QLabel(centralwidget);
        Ball_two->setObjectName(QString::fromUtf8("Ball_two"));
        Ball_two->setGeometry(QRect(380, 320, 21, 21));
        Ball_two->setScaledContents(true);
        teamTwo_selectedprime_2 = new QLabel(centralwidget);
        teamTwo_selectedprime_2->setObjectName(QString::fromUtf8("teamTwo_selectedprime_2"));
        teamTwo_selectedprime_2->setGeometry(QRect(400, 290, 41, 41));
        teamTwo_selectedprime_2->setFont(font);
        teamOne_selectedprime_2 = new QLabel(centralwidget);
        teamOne_selectedprime_2->setObjectName(QString::fromUtf8("teamOne_selectedprime_2"));
        teamOne_selectedprime_2->setGeometry(QRect(330, 290, 41, 41));
        teamOne_selectedprime_2->setFont(font);
        teamOne_againstGK_kit = new QLabel(centralwidget);
        teamOne_againstGK_kit->setObjectName(QString::fromUtf8("teamOne_againstGK_kit"));
        teamOne_againstGK_kit->setGeometry(QRect(610, 270, 60, 60));
        teamOne_againstGK_kit->setScaledContents(true);
        teamOne_againstGK_kit->setWordWrap(false);
        teamTwo_againstGK_kit = new QLabel(centralwidget);
        teamTwo_againstGK_kit->setObjectName(QString::fromUtf8("teamTwo_againstGK_kit"));
        teamTwo_againstGK_kit->setGeometry(QRect(90, 280, 60, 60));
        teamTwo_againstGK_kit->setScaledContents(true);
        teamTwo_againstGK_kit->setWordWrap(false);
        teamTwo_selectedprime_againstGK = new QLabel(centralwidget);
        teamTwo_selectedprime_againstGK->setObjectName(QString::fromUtf8("teamTwo_selectedprime_againstGK"));
        teamTwo_selectedprime_againstGK->setGeometry(QRect(110, 290, 41, 41));
        teamTwo_selectedprime_againstGK->setFont(font);
        teamOne_selectedprime_againstGK = new QLabel(centralwidget);
        teamOne_selectedprime_againstGK->setObjectName(QString::fromUtf8("teamOne_selectedprime_againstGK"));
        teamOne_selectedprime_againstGK->setGeometry(QRect(630, 280, 41, 41));
        teamOne_selectedprime_againstGK->setFont(font);
        goalScored = new QLabel(centralwidget);
        goalScored->setObjectName(QString::fromUtf8("goalScored"));
        goalScored->setGeometry(QRect(50, 420, 651, 71));
        QFont font2;
        font2.setPointSize(30);
        goalScored->setFont(font2);
        firstto3 = new QLabel(centralwidget);
        firstto3->setObjectName(QString::fromUtf8("firstto3"));
        firstto3->setGeometry(QRect(600, 90, 81, 16));
        Ball_One_Scored = new QLabel(centralwidget);
        Ball_One_Scored->setObjectName(QString::fromUtf8("Ball_One_Scored"));
        Ball_One_Scored->setGeometry(QRect(700, 330, 21, 21));
        Ball_One_Scored->setScaledContents(true);
        Ball_Two_Scored = new QLabel(centralwidget);
        Ball_Two_Scored->setObjectName(QString::fromUtf8("Ball_Two_Scored"));
        Ball_Two_Scored->setGeometry(QRect(30, 260, 21, 21));
        Ball_Two_Scored->setScaledContents(true);
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(570, 40, 141, 52));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        TeamOneScore = new QLabel(layoutWidget3);
        TeamOneScore->setObjectName(QString::fromUtf8("TeamOneScore"));
        QFont font3;
        font3.setPointSize(28);
        font3.setBold(true);
        TeamOneScore->setFont(font3);

        horizontalLayout_2->addWidget(TeamOneScore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Dash = new QLabel(layoutWidget3);
        Dash->setObjectName(QString::fromUtf8("Dash"));
        Dash->setFont(font3);

        horizontalLayout_2->addWidget(Dash);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        TeamTwoScore = new QLabel(layoutWidget3);
        TeamTwoScore->setObjectName(QString::fromUtf8("TeamTwoScore"));
        TeamTwoScore->setFont(font3);

        horizontalLayout_2->addWidget(TeamTwoScore);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(550, 20, 181, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        teamOne_name = new QLabel(layoutWidget4);
        teamOne_name->setObjectName(QString::fromUtf8("teamOne_name"));

        horizontalLayout_3->addWidget(teamOne_name);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        teamTwo_name = new QLabel(layoutWidget4);
        teamTwo_name->setObjectName(QString::fromUtf8("teamTwo_name"));

        horizontalLayout_3->addWidget(teamTwo_name);

        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(280, 80, 182, 18));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        NoOfPlayers = new QLabel(layoutWidget5);
        NoOfPlayers->setObjectName(QString::fromUtf8("NoOfPlayers"));

        horizontalLayout_4->addWidget(NoOfPlayers);

        playercountDisplay = new QLabel(layoutWidget5);
        playercountDisplay->setObjectName(QString::fromUtf8("playercountDisplay"));

        horizontalLayout_4->addWidget(playercountDisplay);

        counterwins = new QLabel(centralwidget);
        counterwins->setObjectName(QString::fromUtf8("counterwins"));
        counterwins->setGeometry(QRect(810, 400, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        layoutWidget1->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        pitchDisplay->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        teamOnekit_gk->raise();
        teamOnekit_9->raise();
        teamOnekit_5->raise();
        teamOnekit_3->raise();
        teamOnekit_8->raise();
        teamOnekit_4->raise();
        teamOnekit_1->raise();
        teamOnekit_10->raise();
        teamOnekit_6->raise();
        teamOnekit_2->raise();
        teamOnekit_7->raise();
        pushButton_ShowInfo->raise();
        layoutWidget1->raise();
        teamTwokit_1->raise();
        teamTwokit_2->raise();
        teamTwokit_3->raise();
        teamTwokit_4->raise();
        teamTwokit_5->raise();
        teamTwokit_6->raise();
        teamTwokit_7->raise();
        teamTwokit_8->raise();
        teamTwokit_9->raise();
        teamTwokit_10->raise();
        teamTwokit_gk->raise();
        teamOne_selectedkit->raise();
        teamTwo_selectedkit->raise();
        teamOne_selectedprime->raise();
        teamTwo_selectedprime->raise();
        DieNo_outcome->raise();
        DieCol_outcome->raise();
        Ball_one->raise();
        Ball_two->raise();
        teamTwo_selectedprime_2->raise();
        teamOne_selectedprime_2->raise();
        teamOne_againstGK_kit->raise();
        teamTwo_againstGK_kit->raise();
        teamTwo_selectedprime_againstGK->raise();
        teamOne_selectedprime_againstGK->raise();
        goalScored->raise();
        firstto3->raise();
        Ball_Two_Scored->raise();
        Ball_One_Scored->raise();
        player_teamtwo_9->raise();
        player_teamtwo_gk->raise();
        player_teamtwo_2->raise();
        player_teamtwo_6->raise();
        player_teamtwo_5->raise();
        player_teamtwo_7->raise();
        player_teamtwo_3->raise();
        player_teamtwo_10->raise();
        player_teamtwo_1->raise();
        player_teamtwo_4->raise();
        player_teamtwo_8->raise();
        player_teamone_7->raise();
        player_teamone_5->raise();
        player_teamone_3->raise();
        player_teamone_4->raise();
        player_teamone_1->raise();
        player_teamone_gk->raise();
        player_teamone_10->raise();
        player_teamone_2->raise();
        player_teamone_6->raise();
        player_teamone_9->raise();
        player_teamone_8->raise();
        winner_duo->raise();
        counterwins->raise();

        retranslateUi(MainWindow);
        QObject::connect(teamone_Primesel, &QLineEdit::textEdited, teamOne_selectedprime, &QLabel::setText);
        QObject::connect(teamtwo_Primesel, &QLineEdit::textEdited, teamTwo_selectedprime, &QLabel::setText);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_ShowInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        pushButton_Roll->setText(QCoreApplication::translate("MainWindow", "Roll Dice!", nullptr));
        diePic->setText(QString());
        die_Resultshow->setText(QCoreApplication::translate("MainWindow", "Die has not been rolled yet.", nullptr));
        player_teamone_1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamone_gk->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        player_teamtwo_gk->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#010101;\">PLAYER PRIME</span></p></body></html>", nullptr));
        teamOnekit_1->setText(QString());
        teamOnekit_2->setText(QString());
        teamOnekit_3->setText(QString());
        teamOnekit_4->setText(QString());
        teamOnekit_5->setText(QString());
        teamOnekit_6->setText(QString());
        teamOnekit_7->setText(QString());
        teamOnekit_8->setText(QString());
        teamOnekit_9->setText(QString());
        teamOnekit_10->setText(QString());
        teamOnekit_gk->setText(QString());
        teamTwokit_1->setText(QString());
        teamTwokit_2->setText(QString());
        teamTwokit_3->setText(QString());
        teamTwokit_4->setText(QString());
        teamTwokit_5->setText(QString());
        teamTwokit_6->setText(QString());
        teamTwokit_7->setText(QString());
        teamTwokit_8->setText(QString());
        teamTwokit_9->setText(QString());
        teamTwokit_10->setText(QString());
        teamTwokit_gk->setText(QString());
        pitchDisplay->setText(QString());
        teamOne_selectedkit->setText(QString());
        teamTwo_selectedkit->setText(QString());
        teamOne_selectedprime->setText(QString());
        teamTwo_selectedprime->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p><p><br/></p></body></html>", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start Game!", nullptr));
        pushButton_Quit->setText(QCoreApplication::translate("MainWindow", "Quit ", nullptr));
        winner_duo->setText(QCoreApplication::translate("MainWindow", "Who wins?", nullptr));
        P1SelectPrimes->setText(QCoreApplication::translate("MainWindow", "Select your prime & opponent's:", nullptr));
        DieNo_outcome->setText(QString());
        DieCol_outcome->setText(QString());
        Ball_one->setText(QString());
        Ball_two->setText(QString());
        teamTwo_selectedprime_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        teamOne_selectedprime_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        teamOne_againstGK_kit->setText(QString());
        teamTwo_againstGK_kit->setText(QString());
        teamTwo_selectedprime_againstGK->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p><p><br/></p></body></html>", nullptr));
        teamOne_selectedprime_againstGK->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        goalScored->setText(QString());
        firstto3->setText(QCoreApplication::translate("MainWindow", "First to 3 wins!", nullptr));
        Ball_One_Scored->setText(QString());
        Ball_Two_Scored->setText(QString());
        TeamOneScore->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Dash->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        TeamTwoScore->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        teamOne_name->setText(QCoreApplication::translate("MainWindow", "Team 1 name", nullptr));
        teamTwo_name->setText(QCoreApplication::translate("MainWindow", "Team 2 name", nullptr));
        NoOfPlayers->setText(QCoreApplication::translate("MainWindow", "N ", nullptr));
        playercountDisplay->setText(QCoreApplication::translate("MainWindow", "Players selected for each team.", nullptr));
        counterwins->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
