#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QtEvents>
#include "enemy.h"
#include "bullet.h"

class Player: public QObject, public QGraphicsPixmapItem {

    Q_OBJECT;

public:
    // Constructor
    Player(QGraphicsItem *parent = 0);

    // Public function
    void keyPressEvent(QKeyEvent *event);

public slots:
    // Public slots function
    void spawn();
};

#endif // PLAYER_H
