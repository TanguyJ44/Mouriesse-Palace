#include "mainwindow.h"
#include "listWidget.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    // Création de notre application QT
    QApplication a(argc, argv);

    // On génére notre interface et roulez jeunesse !
    MainWindow w;
    w.show();

    // Boucle d'exécution jusqu'à la fin du programme
    return a.exec();
}
