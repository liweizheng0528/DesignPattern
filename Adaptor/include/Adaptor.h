#ifndef ADAPTOR_H_
#define ADAPTOR_H_


#include <cmath>
#include "Service.h"
#include "ClientInterface.h"

//方钉适配器，该适配器能让客户端将方钉放入圆孔中
class SquarePegAdaptor:public RoundReg{
    public:
    explicit SquarePegAdaptor(SquarePeg* sp):square_peg_(sp){}
    int get_radius() override{
        return square_peg_->get_width()*sqrt(2)/2;
    }
    private:
    SquarePeg* square_peg_;
};



#endif //ADAPTOR_H_