#include "bullet.h"
#include "game.h"

extern Game *game;

Bullet::Bullet(QGraphicsItem *parent) {

    QGraphicsPixmapItem::setPixmap(QPixmap(":/images/image/flaming_meteor.png"));
    QGraphicsItem::setRotation(180);

    QTimer * timer = new QTimer(this);
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->QTimer::start(50);
}

void Bullet::move() {

    QList<QGraphicsItem *> colliding_items = QGraphicsItem::collidingItems();

    for (int i = 0; i < colliding_items.size(); ++i) {
        if (typeid(*(colliding_items[i])) == typeid(Enemy)) {
            QGraphicsItem::scene()->QGraphicsScene::removeItem(colliding_items[i]);
            QGraphicsItem::scene()->QGraphicsScene::removeItem(this);

            game->score->increase();

            delete colliding_items[i];
            delete this;
            return;
        }
    }

    QGraphicsItem::setPos(x(), y() - 10);

    if (QGraphicsItem::pos().y() < 0) {
        QGraphicsItem::scene()->QGraphicsScene::removeItem(this);
        delete this;
    }
}
