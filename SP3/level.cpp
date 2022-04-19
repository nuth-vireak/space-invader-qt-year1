#include "level.h"

Level::Level(QGraphicsItem *parent) {

    QGraphicsTextItem::setPlainText(QString("Level: NOOB"));
    QGraphicsTextItem::setDefaultTextColor(Qt::white);
    QGraphicsTextItem::setFont(QFont("000webfont",22));
    QGraphicsItem::setPos(15, 25);
}
