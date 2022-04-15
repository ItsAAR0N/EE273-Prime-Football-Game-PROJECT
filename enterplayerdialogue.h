/*
Project Name: Prime Number Football Game
Module Description: Header file containing class definition of the dialogue for user prime entry
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/


#ifndef ENTERPLAYERDIALOGUE_H
#define ENTERPLAYERDIALOGUE_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class EnterPlayerDialogue; }
QT_END_NAMESPACE

class EnterPlayerDialogue : public QDialog
{
    Q_OBJECT

public:
     EnterPlayerDialogue(QWidget *parent = nullptr);
    ~EnterPlayerDialogue();

private slots:
    void on_pushButton_2_check_prime_clicked();

    void on_pushButton_Ok_clicked();


signals:
        // SEND SIGNALS FOR PLAYER PRIMES TEAM 1
        void send_teamone_1(QString teamone_no1);
        void send_teamone_2(QString teamone_no2);
        void send_teamone_3(QString teamone_no3);
        void send_teamone_4(QString teamone_no1);
        void send_teamone_5(QString teamone_no2);
        void send_teamone_6(QString teamone_no3);
        void send_teamone_7(QString teamone_no1);
        void send_teamone_8(QString teamone_no2);
        void send_teamone_9(QString teamone_no3);
        void send_teamone_10(QString teamone_no2);

        // SEND SIGNALS FOR PLAYER PRIMES TEAM 2
        void send_teamtwo_1(QString teamtwo_no1);
        void send_teamtwo_2(QString teamtwo_no2);
        void send_teamtwo_3(QString teamtwo_no3);
        void send_teamtwo_4(QString teamtwo_no1);
        void send_teamtwo_5(QString teamtwo_no2);
        void send_teamtwo_6(QString teamtwo_no3);
        void send_teamtwo_7(QString teamtwo_no1);
        void send_teamtwo_8(QString teamtwo_no2);
        void send_teamtwo_9(QString teamtwo_no3);
        void send_teamtwo_10(QString teamtwo_no2);

        // SEND SIGNALS FOR TEAM NAMES
        void send_teamone_name(QString teamname);
        void send_teamtwo_name(QString teamname);

        // SEND SIGNAL FOR NO OF PLAYERS

        void send_Team_player_count(QString teamPlayerCount);

private:
    Ui::EnterPlayerDialogue *ui;

};

#endif // ENTERPLAYERDIALOGUE_H
