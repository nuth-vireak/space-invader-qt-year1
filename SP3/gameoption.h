#ifndef GAMEOPTION_H
#define GAMEOPTION_H

#include <QWidget>

namespace Ui {
class GameOption;
}

class GameOption : public QWidget
{
    Q_OBJECT

public:
    explicit GameOption(QWidget *parent = nullptr);
    ~GameOption();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::GameOption *ui;
};

#endif // GAMEOPTION_H
