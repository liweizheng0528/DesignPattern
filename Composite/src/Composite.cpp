#include "Composite.h"
#include "Leaf.h"


int main(){
    CompoundGraphic* compound = new CompoundGraphic();
    Dot* dot1 = new Dot(1,2);
    Circle* circle = new Circle(1.5,2,2);
    CompoundGraphic* child_compound = new CompoundGraphic();
    Dot* dot2 = new Dot(4,7);
    Dot* dot3 = new Dot(3,2);
    child_compound->add(0,dot2);
    child_compound->add(1,dot3);

    compound->add(0,dot1);
    compound->add(1,circle);
    compound->add(2,child_compound);

    compound->draw();

    delete compound;
    delete child_compound;
    delete dot1;
    delete dot2;
    delete dot3;
    delete circle;


    return 0;
}