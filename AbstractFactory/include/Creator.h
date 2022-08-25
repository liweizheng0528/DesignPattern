#ifndef CREATOR_H_
#define CREATOR_H_

#include "Product.h"
#include <memory>

class Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() = 0;
    virtual std::shared_ptr<Book> produce_book() = 0;
};

#endif // CREATOR_H_