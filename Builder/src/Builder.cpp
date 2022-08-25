#include"Director.h"
#include"ConcreteBuilder.h"

int main(){
    std::cout<<"Builder"<<std::endl;
    CarBuilder* carbuilder;
    Director* director = new Director();
    Car car;


    std::cout<<"construct benz car"<<std::endl;
    carbuilder = new BenzBuilder();
    director->set_builder(carbuilder);
    car = director->ConstructCar();
    delete carbuilder;

    std::cout<<"construct audi car"<<std::endl;
    carbuilder = new AudiBuilder();
    director->set_builder(carbuilder);
    car = director->ConstructCar();
    delete carbuilder;




    std::cout<<"done!"<<std::endl;
    delete director;

    return 0;
}