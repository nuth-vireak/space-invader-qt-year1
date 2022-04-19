#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

class Enemy: public QObject, public QGraphicsPixmapItem {

    Q_OBJECT;

public:
    // Constructor
    Enemy(QGraphicsItem *parent = 0);

public slots:
    // Public slots function
    void move();
};

#endif // ENEMY_H
