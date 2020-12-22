#include "listWidget.h"
#include <QDebug>

ListWidget::ListWidget(QWidget *parent)
    : QListWidget(parent)
{
    qDebug() << "init !";

    setDragEnabled(false);
}

ListWidget::~ListWidget()
{
    delete this;
}

void ListWidget::dragEnterEvent(QDragEnterEvent *event)
{
    event->accept();
    qDebug() << "1";
}

void ListWidget::dragMoveEvent(QDragMoveEvent *event)
{
    event->accept();
    qDebug() << "2";
}

void ListWidget::dropEvent(QDropEvent *event)
{
    event->accept();
    qDebug() << "3";
}

void ListWidget::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "4";
}
