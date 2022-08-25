#ifndef REFINED_ABSTRACTION_H_
#define REFINED_ABSTRACTION_H_


#include <string>
#include "Abstraction.h"

// 精确抽象类: BigPen
class BigPen:public Pen{
    public:
    void draw(std::string name){
        std::string pen_type = "BigPen";
        color_->bepaint(pen_type,name); 
    }
};

// 精确抽象类: SmallPencil
class SmallPencil : public Pen {
 public:
    void draw(std::string name) {
        std::string pen_type = "SmallPencil";
        color_->bepaint(pen_type, name);
    }
};



#endif //REFINED_ABSTRACTION_H_