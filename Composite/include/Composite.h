#ifndef COMPOSITE_H_
#define COMPOSITE_H_

#include <map>
#include "Component.h"



class CompoundGraphic:public Graphic{
    public:
    void add(int id, Graphic* child){
        child_Graphic_[id] = child;
    }
    void remove(int id){
        child_Graphic_.erase(id);
    }
    void move_to(int x,int y)override{
        for(auto& iter:child_Graphic_){
            iter.second->move_to(x,y);
        }
    }
    void draw()override{
        for(auto& iter:child_Graphic_){
            iter.second->draw();
        }
    }
    private:
    std::map<int,Graphic*> child_Graphic_;
};

#endif //COMPOSITE_H_