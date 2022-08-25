#ifndef CONCRETECREATOR_H_
#define CONCRETECREATOR_H_

#include <memory>
#include "Creator.h"
#include "ConceteProduct.h"

class ChineseFactory : public Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() override
    {
        return std::make_shared<ChineseMovie>();
    }
    virtual std::shared_ptr<Book> produce_book() override
    {
        return std::make_shared<ChineseBook>();
    }
};

class JapaneseFactory : public Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() override
    {
        return std::make_shared<JapaneseMovie>();
    }
    virtual std::shared_ptr<Book> produce_book() override
    {
        return std::make_shared<JapaneseBook>();
    }
};

class AmericanFactory : public Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() override
    {
        return std::make_shared<AmericanMovie>();
    }
    virtual std::shared_ptr<Book> produce_book() override{
        return nullptr;
    }
};
class KoreanFactory : public Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() override
    {
        return std::make_shared<KoreanMovie>();
    }
    virtual std::shared_ptr<Book> produce_book() override{
        return nullptr;
    }
};
#endif // CONCRETECREATOR_H_