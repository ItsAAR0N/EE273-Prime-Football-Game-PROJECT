/*
Project Name: Prime Number Football Game
Module Description: Source file containing implementation of the member functions specified in the associated enterplayerdialogue header file
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/

#include "enterplayerdialogue.h"
#include "ui_enterplayerdialogue.h"
#include "Player.h"
#include "Main.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <vector>
#include <QThread>
using namespace std;

EnterPlayerDialogue::EnterPlayerDialogue(QWidget *parent) : // Constructor
    QDialog(parent),
    ui(new Ui::EnterPlayerDialogue)
{
    ui->setupUi(this);
}

EnterPlayerDialogue::~EnterPlayerDialogue() // Destructor
{
    delete ui;
}

void EnterPlayerDialogue::on_pushButton_2_check_prime_clicked()
{
    vector<Player> teamOnePlayers(10); // Vectors of objects using setters/getters to store primes...
    vector<Player>::iterator first1 = teamOnePlayers.begin(), toofar1 = teamOnePlayers.end(), cur1; // Define iterators...

    vector<Player> teamTwoPlayers (10);
    vector<Player>::iterator first2 = teamTwoPlayers.begin(), toofar2 = teamTwoPlayers.end(), cur2;

    int storeTeamOnePlayers[10] = {
        ui->lineEdit_1_teamone->text().toInt(),
        ui->lineEdit_2_teamone->text().toInt(),
        ui->lineEdit_3_teamone->text().toInt(),
        ui->lineEdit_4_teamone->text().toInt(),
        ui->lineEdit_5_teamone->text().toInt(),
        ui->lineEdit_6_teamone->text().toInt(),
        ui->lineEdit_7_teamone->text().toInt(),
        ui->lineEdit_8_teamone->text().toInt(),
        ui->lineEdit_9_teamone->text().toInt(),
        ui->lineEdit_10_teamone->text().toInt(),
    };

    int storeTeamTwoPlayers[10] = {
        ui->lineEdit_1_teamtwo->text().toInt(),
        ui->lineEdit_2_teamtwo->text().toInt(),
        ui->lineEdit_3_teamtwo->text().toInt(),
        ui->lineEdit_4_teamtwo->text().toInt(),
        ui->lineEdit_5_teamtwo->text().toInt(),
        ui->lineEdit_6_teamtwo->text().toInt(),
        ui->lineEdit_7_teamtwo->text().toInt(),
        ui->lineEdit_8_teamtwo->text().toInt(),
        ui->lineEdit_9_teamtwo->text().toInt(),
        ui->lineEdit_10_teamtwo->text().toInt(),
    };
    // Set primes for player one using setter of Player class
    cur1 = first1; int i = 0;
    while (cur1 != toofar1) {
        cur1->setPrime(storeTeamOnePlayers[i]);     
        while (checkPrime(storeTeamOnePlayers[i]) != true && storeTeamOnePlayers[i] != 0) { // Discount empty fields
            QMessageBox::critical(this, "Team 1","Non-prime number detected, please enter again.");
            break;
        }    
        ++cur1,++i;
    }

    // Set primes for player two using setter of Player class
    cur2 = first2; int j = 0;
    while (cur2 != toofar2) {
        cur2->setPrime(storeTeamTwoPlayers[j]);
        while (checkPrime(storeTeamTwoPlayers[j]) != true && storeTeamTwoPlayers[j] != 0) { // Discount empty fields
            QMessageBox::critical(this, "Team 2","Non-prime number detected for team two, please enter again.");
            break;
        }
        ++cur2,++j;
    }

    // SEND SIGNAL FOR TEAM 1
        emit send_teamone_1(ui->lineEdit_1_teamone->text());
        emit send_teamone_2(ui->lineEdit_2_teamone->text());
        emit send_teamone_3(ui->lineEdit_3_teamone->text());
        emit send_teamone_4(ui->lineEdit_4_teamone->text());
        emit send_teamone_5(ui->lineEdit_5_teamone->text());
        emit send_teamone_6(ui->lineEdit_6_teamone->text());
        emit send_teamone_7(ui->lineEdit_7_teamone->text());
        emit send_teamone_8(ui->lineEdit_8_teamone->text());
        emit send_teamone_9(ui->lineEdit_9_teamone->text());
        emit send_teamone_10(ui->lineEdit_10_teamone->text());
    // SEND SIGNAL FOR TEAM 2
        emit send_teamtwo_1(ui->lineEdit_1_teamtwo->text());
        emit send_teamtwo_2(ui->lineEdit_2_teamtwo->text());
        emit send_teamtwo_3(ui->lineEdit_3_teamtwo->text());
        emit send_teamtwo_4(ui->lineEdit_4_teamtwo->text());
        emit send_teamtwo_5(ui->lineEdit_5_teamtwo->text());
        emit send_teamtwo_6(ui->lineEdit_6_teamtwo->text());
        emit send_teamtwo_7(ui->lineEdit_7_teamtwo->text());
        emit send_teamtwo_8(ui->lineEdit_8_teamtwo->text());
        emit send_teamtwo_9(ui->lineEdit_9_teamtwo->text());
        emit send_teamtwo_10(ui->lineEdit_10_teamtwo->text());
    // SEND TEAM NAMES
        emit send_teamone_name(ui->teamOne_name->text());
        emit send_teamtwo_name(ui->teamTwo_name->text());
    // SEND NO. OF PLAYERS
        emit send_Team_player_count(ui->Team_player_count->text());
}

void EnterPlayerDialogue::on_pushButton_Ok_clicked()
{
    this->close();
}





