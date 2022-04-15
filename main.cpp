/*
Project Name: Prime Number Football Game
Module Description: Source file containing implementation of the member functions specified in the associated main header file
Last Updated: 15/04/2022 - Addition of internal commentary
Author: Aaron Shek & Cameron Blair
*/


#include <vector>
#include <string>
#include <QApplication>
#include "mainwindow.h"
#include "Main.h"
#include "Die.h"
#include "Player.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    return 0;
}
