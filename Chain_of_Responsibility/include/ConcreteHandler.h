#ifndef CONCRETE_HANDLER_H_
#define CONCRETE_HANDLER_H_

#include <string>
#include <cstdio>
#include "BaseHandler.h"


class GroupLeader:public BaseApprover{
    public:
    explicit GroupLeader(std::string name) : BaseApprover(10, name) {}
};

class Manager : public BaseApprover {
 public:
    explicit Manager(std::string name) : BaseApprover(100, name) {}
};

class Boss : public BaseApprover {
 public:
    explicit Boss(std::string name) : BaseApprover(1000, name) {}
};


#endif