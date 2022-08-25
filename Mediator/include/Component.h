#ifndef COMPONENT_H_
#define COMPONENT_H_

#include "Mediator.h"
#include <cstdio>
#include <string>

enum PERSON_TYPE
{
    kUnknown,
    kLandlord,
    kTenant,
};

class Colleague
{
private:
    Mediator *mediator_;
    PERSON_TYPE person_type_;

public:
    void set_mediator(Mediator *m)
    {
        mediator_ = m;
    }
    Mediator *get_mediator()
    {
        return mediator_;
    }
    void set_personType(PERSON_TYPE pt)
    {
        person_type_ = pt;
    }
    PERSON_TYPE get_person_type()
    {
        return person_type_;
    }
    virtual void ask() = 0;
    virtual void answer() = 0;
};







#endif // COMPONENT_H_