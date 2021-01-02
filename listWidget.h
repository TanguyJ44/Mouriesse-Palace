#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include "mainwindow.h"
#include <QListWidget>
#include <QDragEnterEvent>

class ListWidget : public QListWidget
{
    Q_OBJECT

public:
    ListWidget(QWidget *parent = nullptr);

signals:
    void newReservationSent(const QString& name, const int& clientId);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;

private slots:
    void dropEvent(QDropEvent *event) override;


};

#endif // LISTWIDGET_H
