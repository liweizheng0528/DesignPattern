#ifndef CONCRETE_COMPONENT_H_
#define CONCRETE_COMPONENT_H_

#include <cstdio>
#include <string>
#include "Mediator.h"
#include "Component.h"



// 具体组件1: 房东
class Landlord : public Colleague {
 public:
    Landlord() {
        name_ = "unknown";
        price_ = -1;
        address_ = "unknown";
        phone_number_ = "unknown";
        set_personType(kUnknown);
    }

    Landlord(std::string name, int price, std::string address, std::string phone_number) {
        name_ = name;
        price_ = price;
        address_ = address;
        phone_number_ = phone_number;
        set_personType(kLandlord);
    }

    void answer() override {
        printf("房东姓名:%s 房租:%d 地址:%s 电话:%s\n", name_.c_str(), price_, address_.c_str(), phone_number_.c_str());
    }

    void ask() override {
        printf("房东%s查看租客信息: \n", name_.c_str());
        this->get_mediator()->operation(this);
    }

 private:
    std::string name_;
    int price_;
    std::string address_;
    std::string phone_number_;
};

// 具体组件2: 租客
class Tenant : public Colleague {
 public:
    Tenant() {
        name_ = "unknown";
    }
    explicit Tenant(std::string name) {
        name_ = name;
        set_personType(kTenant);
    }
    void ask() {
        printf("租客%s询问房东信息:\n", name_.c_str());
        this->get_mediator()->operation(this);
    }
    void answer() {
        printf("租客姓名: %s\n", name_.c_str());
    }

 private:
    std::string name_;
};








#endif //CONCRETE_COMPONENT_H_