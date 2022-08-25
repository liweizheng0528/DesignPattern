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
    std::cout<<"AbstractFactory"<<std::endl;
    std::shared_ptr<Factory> factory;
    std::shared_ptr<Movie> product_movie;
    std::shared_ptr<Book> product_book;
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
        product_movie = factory->produce_movie();
        product_book = factory->produce_book();
        break;
    }
    case Japan:
    {
        factory = std::make_shared<JapaneseFactory>();
        product_movie = factory->produce_movie();
        product_book = factory->produce_book();
        break;
    }
    case America:
    {
        factory = std::make_shared<AmericanFactory>();
        product_movie = factory->produce_movie();
        break;
    }
    case Korea:
    {
        factory = std::make_shared<KoreanFactory>();
        product_movie = factory->produce_movie();
        break;
    }
    }

    auto moviename = product_movie->get_moviename();
    auto bookname = product_book->get_bookname();
    std::cout << moviename << std::endl;
    std::cout << bookname << std::endl;
    return 0;
}
