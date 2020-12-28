#include "mainwindow.h"
#include "client.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    std::vector <Client> clients;

    Client c1{"Tanguy", "JOSEPH"};
    Client c2{"Michel", "DELACROIX"};

    clients.push_back(c1);
    clients.push_back(c2);

    std::cout << "Id: " << clients[0].getId() << std::endl;
    std::cout << "Prénom: " << clients[0].getFirstName() << std::endl;
    std::cout << "Nom: " << clients[0].getLastName() << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << "Id: " << clients[1].getId() << std::endl;
    std::cout << "Prénom: " << clients[1].getFirstName() << std::endl;
    std::cout << "Nom: " << clients[1].getLastName() << std::endl;

    return a.exec();
}
