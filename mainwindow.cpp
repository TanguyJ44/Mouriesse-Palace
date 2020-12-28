#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDragEnterEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(1000, 700);

    /*ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidgetLeft->setCurrentIndex(0);
    ui->stackedWidgetRight->setCurrentIndex(0);*/

    ui->listWidgetReserv->setAcceptDrops(false);
    ui->listWidgetReserv->setDragEnabled(false);
    //ui->listWidgetDrop->setDragEnabled(false);

    ui->listWidgetDrag->insertItem(1, new QListWidgetItem(QIcon(":user-max.png"), "Jean-Louis Dureuille"));
    ui->listWidgetDrag->insertItem(2, new QListWidgetItem(QIcon(":user-max.png"), "Marc Lendo"));
    ui->listWidgetDrag->insertItem(3, new QListWidgetItem(QIcon(":user-max.png"), "Sophie Marteno"));
    ui->listWidgetDrag->insertItem(4, new QListWidgetItem(QIcon(":user-max.png"), "Damien Prébau"));
    ui->listWidgetDrag->insertItem(5, new QListWidgetItem(QIcon(":user-max.png"), "Alick Mouriesse"));

    ui->listWidgetReserv->insertItem(1, this->createItem((char*) "Chambres"));
    ui->listWidgetReserv->insertItem(2, this->createItem((char*) "Repas"));
    ui->listWidgetReserv->insertItem(3, this->createItem((char*) "SPA"));
    ui->listWidgetReserv->insertItem(4, this->createItem((char*) "Room Services"));
    ui->listWidgetReserv->insertItem(5, this->createItem((char*) "Taxis"));
    ui->listWidgetReserv->insertItem(6, this->createItem((char*) "Avions"));
    ui->listWidgetReserv->insertItem(7, this->createItem((char*) "Golf"));
    ui->listWidgetReserv->insertItem(8, this->createItem((char*) "Tennis"));
    ui->listWidgetReserv->insertItem(9, this->createItem((char*) "Massages"));
    ui->listWidgetReserv->insertItem(10, this->createItem((char*) "Bateaux"));
    ui->listWidgetReserv->insertItem(11, this->createItem((char*) "Spectacles"));
    ui->listWidgetReserv->insertItem(12, this->createItem((char*) "EXIT"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

QListWidgetItem* MainWindow::createItem(char* name)
{
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(name);
    if (name[0] != 'E') {
        item->setIcon(QIcon(":" + item->text() + ".png"));
    } else {
        item->setIcon(QIcon(":exit.png"));
    }
    return item;
}

void MainWindow::changeMenuData(QString name)
{
    ui->labelTitleFocus->setText(name);
}

void MainWindow::on_pushButtonLogin_clicked()
{
    ui->stackedWidgetLeft->setCurrentIndex(0);
    ui->stackedWidgetRight->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_listWidgetReserv_itemDoubleClicked(QListWidgetItem *item)
{
    this->changeMenuData("Réservation " + item->text());

    if (item->data(0).toString().contains("EXIT")) {
        ui->stackedWidget->setCurrentIndex(0);
    } else {
        ui->stackedWidgetRight->setCurrentIndex(1);
    }
}

void MainWindow::on_pushButtonBackHome_clicked()
{
    ui->stackedWidgetRight->setCurrentIndex(0);
}

void MainWindow::on_listWidgetDrag_itemDoubleClicked(QListWidgetItem *item)
{
    ui->stackedWidgetLeft->setCurrentIndex(1);
}

void MainWindow::on_pushButtonAddClient_clicked()
{
    ui->stackedWidgetLeft->setCurrentIndex(2);
}

void MainWindow::on_pushButtonDelClient_clicked()
{
    if (ui->listWidgetDrag->selectedItems().size() != 0) {
        QMessageBox::question(
            this,
            tr("Supprimer un client"),
            tr("Étes vous sûr de vouloir supprimer le client ") + ui->listWidgetDrag->currentItem()->text(),
            QMessageBox::Yes | QMessageBox::Cancel
        );
    } else {
        QMessageBox::warning(
            this,
            tr("Supprimer un client"),
            tr("Vous devez sélectionner un client avant de le supprimer !")
        );
    }
}

void MainWindow::on_pushButtonInfoBack_clicked()
{
    ui->stackedWidgetLeft->setCurrentIndex(0);
}

void MainWindow::on_pushButtonAddCancel_clicked()
{
    ui->stackedWidgetLeft->setCurrentIndex(0);
}
