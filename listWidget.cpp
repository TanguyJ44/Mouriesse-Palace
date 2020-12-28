#include "listWidget.h"
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
    qDebug() << list->currentItem()->text();

    clear();
}
