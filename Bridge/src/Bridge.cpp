#include "ConcreteImplementation.h"
#include "RefinedAbstraction.h"
#include <memory>

int main(){
    auto color = std::make_shared<Red>();
    auto pen = std::make_shared<SmallPencil>();
    pen->set_color(color.get());
    pen->draw("sun");
    return 0;
}