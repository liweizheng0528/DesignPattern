#ifndef CONCRETEPRODUCT_H_
#define CONCRETEPRODUCT_H_

#include <iostream>
#include <string>
#include "Product.h"

class ChineseMovie : public Movie
{
public:
    virtual std::string get_moviename() override
    {
        return "功夫";
    };
};
class JapaneseMovie : public Movie
{
public:
    virtual std::string get_moviename() override
    {
        return "sensei";
    }
};
class AmericanMovie : public Movie
{
public:
    virtual std::string get_moviename() override
    {
        return "ironman";
    }
};
class KoreanMovie : public Movie
{
public:
    virtual std::string get_moviename() override
    {
        return "kimqi";
    }
};

class ChineseBook:public Book{
    public:
    virtual std::string get_bookname() override{
        return "《三国演义》";
    }
};
class JapaneseBook : public Book
{
public:
    virtual std::string get_bookname() override
    {
        return "びゃくやこう";
    }
};
#endif // CONCRETEPRODUCT_H_