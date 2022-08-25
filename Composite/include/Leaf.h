#ifndef LEAF_H_
#define LEAF_H_

#include <cstdio>
#include "Component.h"


class Dot:public Graphic{
    public:
    Dot(int x,int y):x_(x),y_(y){}
    void move_to(int x,int y)override{
        x_ +=x;
        y_ +=y; 
    }
    void draw()override{
        printf("draw at (%d,%d)\n",x_,y_);
    }
    private:
    int x_;
    int y_;
};

class Circle:public Graphic{
    public:
    explicit Circle(float ra,int x,int y):radius_(ra),x_(x),y_(y){}
    void move_to(int x,int y)override{
        x_ += x;
        y_ += y;
    }
    void draw()override{
        printf("draw a circle at (%d,%d) with radius: %f\n",x_,y_,radius_);
    }
    private:
    float radius_;
    int x_;
    int y_;
};


#endif  // LEAF_H_