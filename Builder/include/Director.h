#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include <memory>
#include "Builder.h"

class Director{
    public:
    Director(){}
    void set_builder(CarBuilder* cb){
        carbuilder_ = cb;
    }
    Car ConstructCar(){
        carbuilder_->buildTire();
        carbuilder_->buildSteeringWheel();
        carbuilder_->buildEngine();
        return carbuilder_->getCar();
    }

    private:
    CarBuilder* carbuilder_=nullptr;
};


#endif