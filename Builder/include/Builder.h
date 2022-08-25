#ifndef BUILDER_H_
#define BUILDER_H_

#include "Product.h"

class CarBuilder
{
public:
    CarBuilder(){};
    ~CarBuilder(){};
    Car getCar()
    {
        return car_;
    }
    virtual void buildTire() = 0;
    virtual void buildSteeringWheel() = 0;
    virtual void buildEngine() = 0;

protected:
    Car car_;
};

#endif // BUILDER_H_