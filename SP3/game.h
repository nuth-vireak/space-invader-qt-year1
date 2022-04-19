#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QImage>
#include "player.h"
#include "score.h"
#include "health.h"
#include "level.h"

class Game: public QGraphicsView {

public:
    // Constructor
    Game(QWidget * parent=0);

    // Objects
    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Health *health;
    Level *level;
};

#endif // GAME_H
