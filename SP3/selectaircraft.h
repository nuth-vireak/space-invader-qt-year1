#ifndef SELECTAIRCRAFT_H
#define SELECTAIRCRAFT_H

#include <QWidget>

namespace Ui {
class SelectAircraft;
}

class SelectAircraft : public QWidget
{
    Q_OBJECT

public:
    explicit SelectAircraft(QWidget *parent = nullptr);
    ~SelectAircraft();

private slots:
    void on_pushButton_select_clicked();

private:
    Ui::SelectAircraft *ui;
};

#endif // SELECTAIRCRAFT_H
