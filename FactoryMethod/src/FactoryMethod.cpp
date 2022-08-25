#include <iostream>
#include <memory>
#include "ConceteCreator.h"
using namespace std;

enum cfg_str
{
    China,
    Japan,
    America,
    Korea
};
int main(int argc, char const *argv[])
{
    std::cout<<"FactoryMethod"<<std::endl;
    std::shared_ptr<Factory> factory;
    std::shared_ptr<Movie> product;
    // std::string cfg_str = "China";
    cfg_str input_str;
    int input_num;
    std::cin >> input_num;
    switch (input_num)
    {
    case 0:
        input_str = China;
        break;
    case 1:
        input_str = Japan;
        break;
    case 2:
        input_str = America;
        break;
    case 3:
        input_str = Korea;
        break;
    default:
        std::cout << "input err" << std::endl;
        break;
    }
    switch (input_str)
    {
    case China:
    {
        factory = std::make_shared<ChineseFactory>();
        product = factory->produce_movie();
        break;
    }
    case Japan:
    {
        factory = std::make_shared<JapaneseFactory>();
        product = factory->produce_movie();
        break;
    }
    case America:
    {
        factory = std::make_shared<AmericanFactory>();
        product = factory->produce_movie();
        break;
    }
    case Korea:
    {
        factory = std::make_shared<KoreanFactory>();
        product = factory->produce_movie();
        break;
    }
    }

    auto moviename = product->get_moviename();
    std::cout << moviename << std::endl;
    return 0;
}
