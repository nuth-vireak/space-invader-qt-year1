#include "enemy.h"
#include "game.h"

extern Game *game;

Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent) {

    int randomNumber = rand() % 3000;
    QGraphicsItem::setPos(randomNumber, 0);

    QGraphicsPixmapItem::setPixmap(QPixmap(":/images/image/enemy.png"));

    QTimer *timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->QTimer::start(500);
}

void Enemy::move() {

    QGraphicsItem::setPos(x(), y() + 5);

    if (QGraphicsItem::pos().y() > 622) {

        QGraphicsItem::scene()->QGraphicsScene::removeItem(this);
        delete this;

        game->health->decrease();
    }
}
