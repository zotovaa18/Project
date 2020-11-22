#include "personcollection.h"

PersonCollection::PersonCollection()
{
    this->p = nullptr;
    this->count = 0;
}

PersonCollection::PersonCollection(Person& per)
{
    this->p = new Person*[1];
    *this->p = &per;
    this->count = 1;
}

int PersonCollection::size() const
{
    return this->count;
}

void PersonCollection::addPerson(Person &per)
{
    if (this->p && this->size() != 0)
    {
            this->count++;
            Person **pc = new Person*[this->count];
            for(int i = 0; i < this->count - 1; i++)
                pc[i] = this->p[i];
            delete [] this->p;
            pc[this->count - 1] = &per;
            this->p = pc;

    }
    else
        {
            this->count++;
            Person **pc = new Person*[this->count];
            pc[this->count - 1] = &per;
            this->p = pc;
        }

}


int PersonCollection::findPerson(QString name)
{
    for (int i = 0; i < this->size(); i++)
        {
            if (name == this->p[i]->getName())
                return 1;
        }
    return 0;
}

