#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <iostream>
#include <string>

class Singleton
{
public:
    static Singleton *GetInstance()
    {
        if (instance_ == nullptr)
        {
            instance_ = new Singleton();
        }
        return instance_;
    }

private:
    Singleton() {}
    static Singleton *instance_;
};


#endif // SINGLETON_H_