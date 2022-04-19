#include "score.h"

Score::Score(QGraphicsItem *parent) {

    score = 0;

    QGraphicsTextItem::setPlainText(QString("Score: ") + QString::number(score));
    QGraphicsTextItem::setDefaultTextColor(Qt::white);
    QGraphicsTextItem::setFont(QFont("000webfont",22));
    QGraphicsItem::setPos(15, y());

}

void Score::increase() {

    score++;
    QGraphicsTextItem::setPlainText(QString("Score: ") + QString::number(score));
}
