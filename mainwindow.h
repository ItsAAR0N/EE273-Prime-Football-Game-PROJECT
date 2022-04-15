/*
Project Name: Prime Number Football Game
Module Description: Header file containing class definition of the main window
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "enterplayerdialogue.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void setDisplay(QLabel* primeDisplay, QLabel* kitDisplay, QString primeNo, bool isTeam2); // Function to display each individual kit and prime number

//    void function2(int teamOnePlayers[], int teamTwoPlayers[]);

    ~MainWindow();
private slots:
    void on_pushButton_Roll_clicked();

    void on_pushButton_ShowInfo_clicked();

    void on_pushButton_Start_clicked();
    // RECEIVE PLAYER PRIMES TEAM 1
    void receive_teamone_1(QString teamone_no1);
    void receive_teamone_2(QString teamone_no2);
    void receive_teamone_3(QString teamone_no3);
    void receive_teamone_4(QString teamone_no1);
    void receive_teamone_5(QString teamone_no2);
    void receive_teamone_6(QString teamone_no3);
    void receive_teamone_7(QString teamone_no1);
    void receive_teamone_8(QString teamone_no2);
    void receive_teamone_9(QString teamone_no3);
    void receive_teamone_10(QString teamone_no2);

    // RECEIVE PLAYER PRIMES TEAM 2
    void receive_teamtwo_1(QString teamtwo_no1);
    void receive_teamtwo_2(QString teamtwo_no2);
    void receive_teamtwo_3(QString teamtwo_no3);
    void receive_teamtwo_4(QString teamtwo_no1);
    void receive_teamtwo_5(QString teamtwo_no2);
    void receive_teamtwo_6(QString teamtwo_no3);
    void receive_teamtwo_7(QString teamtwo_no1);
    void receive_teamtwo_8(QString teamtwo_no2);
    void receive_teamtwo_9(QString teamtwo_no3);
    void receive_teamtwo_10(QString teamtwo_no2);

    // RECEIVE NO. OF PLAYERS
    void receive_Team_player_count(QString teamPlayerCount);

    // RECEIVE TEAM NAMES
    void receive_teamOne_name(QString teamOne_name);
    void receive_teamTwo_name(QString teamTwo_name);

    void on_pushButton_Quit_clicked();

    void on_teamone_Primesel_textEdited(const QString &arg1);

    void on_teamtwo_Primesel_textEdited(const QString &arg1);

    void valid_check();


private:
    Ui::MainWindow *ui;
    EnterPlayerDialogue* enterPlayerDialogue;
    QTimer *mTimer;
};

#endif // MAINWINDOW_H
