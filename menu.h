#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "delivg.h"

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_OrderButton_clicked();

private:
    Ui::Menu *ui;
    DelivG *del;
};

#endif // MENU_H
