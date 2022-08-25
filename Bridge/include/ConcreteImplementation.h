#ifndef CONCRETE_IMPLEMENTATION_H_
#define CONCRETE_IMPLEMENTATION_H_

#include <string>
#include "Implementation.h"

// 具体实现类: Red
class Red : public Color {
 public:
    void bepaint(std::string pen_type, std::string name) override {
        std::cout << pen_type << " draw a red " << name << "." << std::endl;
    }
};

// 具体实现类: Green
class Green : public Color {
 public:
    void bepaint(std::string pen_type, std::string name) override {
        std::cout << pen_type << " draw a green " << name << "." << std::endl;
    }
};


#endif  // CONCRETE_IMPLEMENTATION_H_