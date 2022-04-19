#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QFont>

class Health: public QGraphicsTextItem {

public:
    // Constructor
    Health(QGraphicsItem *parent = 0);
    void decrease();

private:
    // Private Varaible
    int health;
};

#endif // HEALTH_H
