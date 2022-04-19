#include "player.h"

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent) {

    QGraphicsPixmapItem::setPixmap(QPixmap(":/images/image/plane1.png"));
}

void Player::keyPressEvent(QKeyEvent *event) {

    if (event->key() == Qt::Key::Key_Left) {
        if (QGraphicsItem::pos().x() > -20)
            QGraphicsItem::setPos(x() - 10, y());
    }

    else if (event->key() == Qt::Key::Key_Right) {
        if (QGraphicsItem::pos().x() + 40 < 1132)
            QGraphicsItem::setPos(x() + 10, y());
    }

    else if (event->key() == Qt::Key::Key_Down) {
        if (QGraphicsItem::pos().y() + 60 < 622)
            QGraphicsItem::setPos(x(), y() + 10);
    }

    else if (event->key() == Qt::Key::Key_Up) {
        if (QGraphicsItem::pos().y() > 0)
            QGraphicsItem::setPos(x(), y() - 10);
    }

    else if (event->key() == Qt::Key::Key_Space) {
        Bullet *bullet = new Bullet();
        bullet->QGraphicsItem::setPos(x() + 45, y());
        QGraphicsItem::scene()->QGraphicsScene::addItem(bullet);
    }
}

void Player::spawn(){
    // create an enemy
    Enemy * enemy = new Enemy();
    QGraphicsItem::scene()->QGraphicsScene::addItem(enemy);
}
