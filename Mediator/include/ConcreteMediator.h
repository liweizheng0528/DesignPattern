#ifndef CONCRETE_MEDIATOR_H_
#define CONCRETE_MEDIATOR_H_

#include <vector>
#include <string>
#include "Component.h"
#include "ConcreteComponent.h"
#include "Mediator.h"


class Agency:public Mediator{
    private:
    std::vector<Landlord*> landlord_list_;
    std::vector<Tenant*> tenant_list_;

    public:
    void registerMethod(Colleague* person){
        switch (person->get_person_type())
        {
        case kLandlord:
            landlord_list_.push_back(reinterpret_cast<Landlord*>(person));
            break;
        case kTenant:
            tenant_list_.push_back(reinterpret_cast<Tenant*>(person));
            break;
        default:
            printf("wrong person!");
        }
    }

    void operation(Colleague* person){
        switch (person->get_person_type())
        {
        case kLandlord:
            for(auto &iter:tenant_list_){
                iter->answer();
            }
            break;
        case kTenant:
            for(auto &iter:landlord_list_){
                iter->answer();
            }
            break;
        default:
            printf("wrong person!");
            break;
        }
    }


};


#endif  // CONCRETE_MEDIATOR_H_