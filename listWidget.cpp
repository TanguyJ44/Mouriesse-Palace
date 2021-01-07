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
    /*
    *   Création QListWidget par copie du QListWidget client
    *   pour récupérer des infos sur le client qui à été drop
    *
    *   Envoie d'un sigal à mainwindow avec les infos du client drop
    */

    QListWidget* list = qobject_cast<QListWidget*>(event->source());

    emit newReservationSent(list->currentItem()->text(), list->currentItem()->data(Qt::UserRole).toInt());

    clear();
}
