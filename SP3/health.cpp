#include "health.h"

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent) {

    health = 3;

    QGraphicsTextItem::setPlainText(QString("Health: ") + QString::number(health));
    QGraphicsTextItem::setDefaultTextColor(Qt::white);
    QGraphicsTextItem::setFont(QFont("000webfont",22));
    QGraphicsItem::setPos(15, 50);

}

void Health::decrease() {

    health--;
    QGraphicsTextItem::setPlainText(QString("Health: ") + QString::number(health));
}
