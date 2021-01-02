#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "client.h"
#include <QMainWindow>
#include <QWidget>
#include <QListWidgetItem>
#include <QString>
#include <QDropEvent>
#include <QDragEnterEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void clearAddClient();

protected:
    QListWidgetItem* createItem(char* name);
    void changeMenuData(QString name);
    void updateListClients();

private slots:
    void onNewReservation(const QString &, const int &);

    void on_pushButtonLogin_clicked();
    void on_listWidgetReserv_itemDoubleClicked(QListWidgetItem *item);
    void on_pushButtonBackHome_clicked();

    void on_listWidgetDrag_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButtonAddClient_clicked();

    void on_pushButtonDelClient_clicked();

    void on_pushButtonInfoBack_clicked();

    void on_pushButtonAddCancel_clicked();

    void on_pushButtonAddValide_clicked();

    void on_comboBoxAddGenre_currentIndexChanged(int index);

    void on_comboBoxInfoGenre_currentIndexChanged(int index);

    void on_pushButtonInfoUpdate_clicked();

    void on_lineEditSearch_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    std::vector <Client> clients;
};

#endif // MAINWINDOW_H
