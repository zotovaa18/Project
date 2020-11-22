#ifndef SELFDELGUI_H
#define SELFDELGUI_H

#include <QWidget>

namespace Ui {
class SelfDelGUI;
}

class SelfDelGUI : public QWidget
{
    Q_OBJECT

public:
    explicit SelfDelGUI(QWidget *parent = nullptr);
    ~SelfDelGUI();

private:
    Ui::SelfDelGUI *ui;
};

#endif // SELFDELGUI_H
