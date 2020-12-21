#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    QListWidgetItem* createItem(char* name);
    void changeMenuData(QString name);

private slots:
    void on_pushButtonLogin_clicked();
    void on_listWidgetReserv_itemDoubleClicked(QListWidgetItem *item);
    void on_pushButtonBackHome_clicked();

    void on_listWidgetDrag_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
