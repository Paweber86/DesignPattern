#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Subject
{
private:
    /* data */
public:
    virtual void registerObserver(Observer *obs) = 0;
    virtual void removeObserver(Observer *obs) = 0 ;
    virtual void notifyObserver() = 0;
};

#endif /* ifndef SUBJECT_H */