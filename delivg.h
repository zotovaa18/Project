#ifndef DELIVG_H
#define DELIVG_H

#include <QWidget>
#include "selfdelgui.h"

namespace Ui {
class DelivG;
}

class DelivG : public QWidget
{
    Q_OBJECT

public:
    explicit DelivG(QWidget *parent = nullptr);
    ~DelivG();

private slots:
    void on_NextD_clicked();

private:
    Ui::DelivG *ui;
    SelfDelGUI *sd;
};

#endif // DELIVG_H
