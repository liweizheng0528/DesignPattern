#ifndef CLIENT_H_
#define CLIENT_H_

#include "ClientInterface.h"

class RoundHole{
    public:
    explicit RoundHole(int r):radius_(r){}
    int get_radius(){
        return radius_;
    }
    bool isFit(RoundReg* rp){
        return radius_>=rp->get_radius();
    }

    private:
    int radius_;
};


#endif //CLIENT_H_