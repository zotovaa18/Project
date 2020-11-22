#ifndef PERSONCOLLECTION_H
#define PERSONCOLLECTION_H
#include "person.h"

class PersonCollection
{
public:
    PersonCollection();
    PersonCollection(Person& per);

    void addPerson(Person& per);
    int findPerson(QString name);
    int size() const;
    Person** get_iterator() const {return this->p;}
    int get_count() const {return  this->count;}

private:
    Person **p;
    int count;
};

#endif // PERSONCOLLECTION_H

