#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "enemy.h"

class Bullet: public QObject, public QGraphicsPixmapItem {

    Q_OBJECT;

public:
    // Constructor
    Bullet(QGraphicsItem *parent = 0);

public slots:
    // Public slots function
    void move();
};

#endif // BULLET_H
