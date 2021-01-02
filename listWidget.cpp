#include "listWidget.h"
#include "mainwindow.h"
#include <QDebug>
#include <QTableWidget>

ListWidget::ListWidget(QWidget *parent)
    : QListWidget(parent)
{
    setDragEnabled(false);
}

void ListWidget::dragEnterEvent(QDragEnterEvent *event)
{
    event->accept();
}

void ListWidget::dragMoveEvent(QDragMoveEvent *event)
{
    event->accept();
}

void ListWidget::dropEvent(QDropEvent *event)
{
    QListWidget* list = qobject_cast<QListWidget*>(event->source());

    emit newReservationSent(list->currentItem()->text(), list->currentItem()->data(Qt::UserRole).toInt());

    clear();
}
