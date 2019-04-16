#ifndef DOUBLEDELEGATE_H
#define DOUBLEDELEGATE_H
#include <QStyledItemDelegate>
#include <QPainter>

class DoubleDelegate : public QStyledItemDelegate
{
public:
    DoubleDelegate();
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // DOUBLEDELEGATE_H
