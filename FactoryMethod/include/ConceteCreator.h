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
};

class JapaneseFactory : public Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() override
    {
        return std::make_shared<JapaneseMovie>();
    }
};

class AmericanFactory : public Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() override
    {
        return std::make_shared<AmericanMovie>();
    }
};
class KoreanFactory : public Factory
{
public:
    virtual std::shared_ptr<Movie> produce_movie() override
    {
        return std::make_shared<KoreanMovie>();
    }
};
#endif // CONCRETECREATOR_H_