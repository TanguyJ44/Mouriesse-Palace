#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QListWidget>
#include <QDragEnterEvent>

class ListWidget : public QListWidget
{
    Q_OBJECT

public:
    ListWidget(QWidget *parent = nullptr);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;

};

#endif // LISTWIDGET_H
