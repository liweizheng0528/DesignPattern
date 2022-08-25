#ifndef CONCRETEBUILDER_
#define CONCRETEBUILDER_

#include "Builder.h"

class BenzBuilder:public CarBuilder{
    public:
    void buildTire() override{
        car_.set_car_tire("benz_tire");
    }
    virtual void buildSteeringWheel() override{
        car_.set_car_steering_wheel("benz_steering_wheel");
    }
    virtual void buildEngine() override{
        car_.set_car_engine("benz_engine");
    }
};

class AudiBuilder:public CarBuilder{
    public:
    void buildTire() override{
        car_.set_car_tire("audi_tire");
    }
    virtual void buildSteeringWheel() override{
        car_.set_car_steering_wheel("audi_steering_wheel");
    }
    virtual void buildEngine() override{
        car_.set_car_engine("audi_engine");
    }
};

#endif //CONCRETEBUILDER_