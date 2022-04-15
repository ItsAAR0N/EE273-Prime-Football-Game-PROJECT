/********************************************************************************
** Form generated from reading UI file 'enterplayerdialogue.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERPLAYERDIALOGUE_H
#define UI_ENTERPLAYERDIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnterPlayerDialogue
{
public:
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *Overall;
    QGroupBox *Left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *InnerLeft;
    QLabel *label;
    QVBoxLayout *EnterboxesLeft;
    QLineEdit *lineEdit_1_teamone;
    QLineEdit *lineEdit_2_teamone;
    QLineEdit *lineEdit_3_teamone;
    QLineEdit *lineEdit_4_teamone;
    QLineEdit *lineEdit_5_teamone;
    QLineEdit *lineEdit_6_teamone;
    QLineEdit *lineEdit_7_teamone;
    QLineEdit *lineEdit_8_teamone;
    QLineEdit *lineEdit_9_teamone;
    QLineEdit *lineEdit_10_teamone;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *Center;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *InnerCenter;
    QLabel *TeamOneName;
    QLineEdit *teamOne_name;
    QLabel *TeamTwoName;
    QLineEdit *teamTwo_name;
    QLabel *TeamPlayerCount;
    QLineEdit *Team_player_count;
    QSpacerItem *verticalSpacer;
    QGroupBox *Right;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *InnerRight;
    QLabel *PrimeNumbers;
    QVBoxLayout *Enterboxesright;
    QLineEdit *lineEdit_1_teamtwo;
    QLineEdit *lineEdit_2_teamtwo;
    QLineEdit *lineEdit_3_teamtwo;
    QLineEdit *lineEdit_4_teamtwo;
    QLineEdit *lineEdit_5_teamtwo;
    QLineEdit *lineEdit_6_teamtwo;
    QLineEdit *lineEdit_7_teamtwo;
    QLineEdit *lineEdit_8_teamtwo;
    QLineEdit *lineEdit_9_teamtwo;
    QLineEdit *lineEdit_10_teamtwo;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *Bottom;
    QPushButton *pushButton_2_check_prime;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *EnterPlayerDialogue)
    {
        if (EnterPlayerDialogue->objectName().isEmpty())
            EnterPlayerDialogue->setObjectName(QString::fromUtf8("EnterPlayerDialogue"));
        EnterPlayerDialogue->resize(440, 445);
        verticalLayout_9 = new QVBoxLayout(EnterPlayerDialogue);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        Overall = new QHBoxLayout();
        Overall->setObjectName(QString::fromUtf8("Overall"));
        Left = new QGroupBox(EnterPlayerDialogue);
        Left->setObjectName(QString::fromUtf8("Left"));
        verticalLayout_3 = new QVBoxLayout(Left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        InnerLeft = new QVBoxLayout();
        InnerLeft->setObjectName(QString::fromUtf8("InnerLeft"));
        label = new QLabel(Left);
        label->setObjectName(QString::fromUtf8("label"));

        InnerLeft->addWidget(label);

        EnterboxesLeft = new QVBoxLayout();
        EnterboxesLeft->setObjectName(QString::fromUtf8("EnterboxesLeft"));
        lineEdit_1_teamone = new QLineEdit(Left);
        lineEdit_1_teamone->setObjectName(QString::fromUtf8("lineEdit_1_teamone"));

        EnterboxesLeft->addWidget(lineEdit_1_teamone);

        lineEdit_2_teamone = new QLineEdit(Left);
        lineEdit_2_teamone->setObjectName(QString::fromUtf8("lineEdit_2_teamone"));

        EnterboxesLeft->addWidget(lineEdit_2_teamone);

        lineEdit_3_teamone = new QLineEdit(Left);
        lineEdit_3_teamone->setObjectName(QString::fromUtf8("lineEdit_3_teamone"));

        EnterboxesLeft->addWidget(lineEdit_3_teamone);

        lineEdit_4_teamone = new QLineEdit(Left);
        lineEdit_4_teamone->setObjectName(QString::fromUtf8("lineEdit_4_teamone"));

        EnterboxesLeft->addWidget(lineEdit_4_teamone);

        lineEdit_5_teamone = new QLineEdit(Left);
        lineEdit_5_teamone->setObjectName(QString::fromUtf8("lineEdit_5_teamone"));

        EnterboxesLeft->addWidget(lineEdit_5_teamone);

        lineEdit_6_teamone = new QLineEdit(Left);
        lineEdit_6_teamone->setObjectName(QString::fromUtf8("lineEdit_6_teamone"));

        EnterboxesLeft->addWidget(lineEdit_6_teamone);

        lineEdit_7_teamone = new QLineEdit(Left);
        lineEdit_7_teamone->setObjectName(QString::fromUtf8("lineEdit_7_teamone"));

        EnterboxesLeft->addWidget(lineEdit_7_teamone);

        lineEdit_8_teamone = new QLineEdit(Left);
        lineEdit_8_teamone->setObjectName(QString::fromUtf8("lineEdit_8_teamone"));

        EnterboxesLeft->addWidget(lineEdit_8_teamone);

        lineEdit_9_teamone = new QLineEdit(Left);
        lineEdit_9_teamone->setObjectName(QString::fromUtf8("lineEdit_9_teamone"));

        EnterboxesLeft->addWidget(lineEdit_9_teamone);

        lineEdit_10_teamone = new QLineEdit(Left);
        lineEdit_10_teamone->setObjectName(QString::fromUtf8("lineEdit_10_teamone"));

        EnterboxesLeft->addWidget(lineEdit_10_teamone);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        EnterboxesLeft->addItem(verticalSpacer_2);


        InnerLeft->addLayout(EnterboxesLeft);


        verticalLayout_3->addLayout(InnerLeft);


        Overall->addWidget(Left);

        Center = new QGroupBox(EnterPlayerDialogue);
        Center->setObjectName(QString::fromUtf8("Center"));
        verticalLayout_8 = new QVBoxLayout(Center);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        InnerCenter = new QVBoxLayout();
        InnerCenter->setObjectName(QString::fromUtf8("InnerCenter"));
        TeamOneName = new QLabel(Center);
        TeamOneName->setObjectName(QString::fromUtf8("TeamOneName"));

        InnerCenter->addWidget(TeamOneName);

        teamOne_name = new QLineEdit(Center);
        teamOne_name->setObjectName(QString::fromUtf8("teamOne_name"));

        InnerCenter->addWidget(teamOne_name);

        TeamTwoName = new QLabel(Center);
        TeamTwoName->setObjectName(QString::fromUtf8("TeamTwoName"));

        InnerCenter->addWidget(TeamTwoName);

        teamTwo_name = new QLineEdit(Center);
        teamTwo_name->setObjectName(QString::fromUtf8("teamTwo_name"));

        InnerCenter->addWidget(teamTwo_name);

        TeamPlayerCount = new QLabel(Center);
        TeamPlayerCount->setObjectName(QString::fromUtf8("TeamPlayerCount"));

        InnerCenter->addWidget(TeamPlayerCount);

        Team_player_count = new QLineEdit(Center);
        Team_player_count->setObjectName(QString::fromUtf8("Team_player_count"));

        InnerCenter->addWidget(Team_player_count);

        verticalSpacer = new QSpacerItem(20, 180, QSizePolicy::Minimum, QSizePolicy::Fixed);

        InnerCenter->addItem(verticalSpacer);


        verticalLayout_8->addLayout(InnerCenter);


        Overall->addWidget(Center);

        Right = new QGroupBox(EnterPlayerDialogue);
        Right->setObjectName(QString::fromUtf8("Right"));
        verticalLayout_4 = new QVBoxLayout(Right);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        InnerRight = new QVBoxLayout();
        InnerRight->setObjectName(QString::fromUtf8("InnerRight"));
        PrimeNumbers = new QLabel(Right);
        PrimeNumbers->setObjectName(QString::fromUtf8("PrimeNumbers"));

        InnerRight->addWidget(PrimeNumbers);

        Enterboxesright = new QVBoxLayout();
        Enterboxesright->setObjectName(QString::fromUtf8("Enterboxesright"));
        lineEdit_1_teamtwo = new QLineEdit(Right);
        lineEdit_1_teamtwo->setObjectName(QString::fromUtf8("lineEdit_1_teamtwo"));

        Enterboxesright->addWidget(lineEdit_1_teamtwo);

        lineEdit_2_teamtwo = new QLineEdit(Right);
        lineEdit_2_teamtwo->setObjectName(QString::fromUtf8("lineEdit_2_teamtwo"));

        Enterboxesright->addWidget(lineEdit_2_teamtwo);

        lineEdit_3_teamtwo = new QLineEdit(Right);
        lineEdit_3_teamtwo->setObjectName(QString::fromUtf8("lineEdit_3_teamtwo"));

        Enterboxesright->addWidget(lineEdit_3_teamtwo);

        lineEdit_4_teamtwo = new QLineEdit(Right);
        lineEdit_4_teamtwo->setObjectName(QString::fromUtf8("lineEdit_4_teamtwo"));

        Enterboxesright->addWidget(lineEdit_4_teamtwo);

        lineEdit_5_teamtwo = new QLineEdit(Right);
        lineEdit_5_teamtwo->setObjectName(QString::fromUtf8("lineEdit_5_teamtwo"));

        Enterboxesright->addWidget(lineEdit_5_teamtwo);

        lineEdit_6_teamtwo = new QLineEdit(Right);
        lineEdit_6_teamtwo->setObjectName(QString::fromUtf8("lineEdit_6_teamtwo"));

        Enterboxesright->addWidget(lineEdit_6_teamtwo);

        lineEdit_7_teamtwo = new QLineEdit(Right);
        lineEdit_7_teamtwo->setObjectName(QString::fromUtf8("lineEdit_7_teamtwo"));

        Enterboxesright->addWidget(lineEdit_7_teamtwo);

        lineEdit_8_teamtwo = new QLineEdit(Right);
        lineEdit_8_teamtwo->setObjectName(QString::fromUtf8("lineEdit_8_teamtwo"));

        Enterboxesright->addWidget(lineEdit_8_teamtwo);

        lineEdit_9_teamtwo = new QLineEdit(Right);
        lineEdit_9_teamtwo->setObjectName(QString::fromUtf8("lineEdit_9_teamtwo"));

        Enterboxesright->addWidget(lineEdit_9_teamtwo);

        lineEdit_10_teamtwo = new QLineEdit(Right);
        lineEdit_10_teamtwo->setObjectName(QString::fromUtf8("lineEdit_10_teamtwo"));

        Enterboxesright->addWidget(lineEdit_10_teamtwo);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Enterboxesright->addItem(verticalSpacer_3);


        InnerRight->addLayout(Enterboxesright);


        verticalLayout_4->addLayout(InnerRight);


        Overall->addWidget(Right);


        verticalLayout_9->addLayout(Overall);

        Bottom = new QHBoxLayout();
        Bottom->setObjectName(QString::fromUtf8("Bottom"));
        pushButton_2_check_prime = new QPushButton(EnterPlayerDialogue);
        pushButton_2_check_prime->setObjectName(QString::fromUtf8("pushButton_2_check_prime"));

        Bottom->addWidget(pushButton_2_check_prime);

        pushButton_Ok = new QPushButton(EnterPlayerDialogue);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));

        Bottom->addWidget(pushButton_Ok);


        verticalLayout_9->addLayout(Bottom);

#if QT_CONFIG(shortcut)
        TeamOneName->setBuddy(teamOne_name);
        TeamTwoName->setBuddy(teamTwo_name);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EnterPlayerDialogue);

        QMetaObject::connectSlotsByName(EnterPlayerDialogue);
    } // setupUi

    void retranslateUi(QDialog *EnterPlayerDialogue)
    {
        EnterPlayerDialogue->setWindowTitle(QCoreApplication::translate("EnterPlayerDialogue", "Player selection", nullptr));
        Left->setTitle(QCoreApplication::translate("EnterPlayerDialogue", "Enter team 1 players", nullptr));
        label->setText(QCoreApplication::translate("EnterPlayerDialogue", "Prime numbers", nullptr));
        Center->setTitle(QCoreApplication::translate("EnterPlayerDialogue", "Each enter team info", nullptr));
        TeamOneName->setText(QCoreApplication::translate("EnterPlayerDialogue", "Team One Name", nullptr));
        TeamTwoName->setText(QCoreApplication::translate("EnterPlayerDialogue", "Team Two Name", nullptr));
        TeamPlayerCount->setText(QCoreApplication::translate("EnterPlayerDialogue", "No. of Players", nullptr));
        Right->setTitle(QCoreApplication::translate("EnterPlayerDialogue", "Enter team 2 players", nullptr));
        PrimeNumbers->setText(QCoreApplication::translate("EnterPlayerDialogue", "Prime numbers", nullptr));
        pushButton_2_check_prime->setText(QCoreApplication::translate("EnterPlayerDialogue", "Verify Primes", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("EnterPlayerDialogue", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterPlayerDialogue: public Ui_EnterPlayerDialogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERPLAYERDIALOGUE_H
