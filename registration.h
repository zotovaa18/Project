#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include "person.h"
#include "personcollection.h"

namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();
    Person *person;
    PersonCollection PC;

    void saveNew(Person &per);
signals:
    void firstWindow();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Registration *ui;
};

#endif // REGISTRATION_H
