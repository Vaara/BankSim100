#include "doubledelegate.h"


DoubleDelegate::DoubleDelegate()
{

}

void DoubleDelegate::paint(QPainter *painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
    double value = index.model()->data(index, Qt::EditRole).toDouble();
    QString str;
    str.setNum(value, 'f', 2);
    str.replace(".", ",");
    str.append(" €");
    QTextOption textOption;
    textOption.setAlignment(Qt::AlignCenter);
    painter->drawText(option.rect, str, textOption);
}
