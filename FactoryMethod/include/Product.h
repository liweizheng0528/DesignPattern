#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>

class Movie
{
public:
    virtual std::string get_moviename() = 0;
};

#endif // PRODUCT_H_