#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>
#include <iostream>

class Car
{
public:
    Car() {}
    void set_car_tire(std::string t)
    {
        tire_ = t;
        std::cout << "set tire:" << tire_ << std::endl;
    }
    void set_car_steering_wheel(std::string sw)
    {
        steering_wheel_ = sw;
        std::cout << "set steering_wheel:" << steering_wheel_ << std::endl;
    }
    void set_car_engine(std::string e)
    {
        engine_ = e;
        std::cout << "set engine:" << engine_ << std::endl;
    }

private:
    std::string tire_;
    std::string steering_wheel_;
    std::string engine_;
};

#endif