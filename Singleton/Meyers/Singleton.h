#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <iostream>
#include <thread>

class Singleton {
 public:
    static Singleton& GetInstance() {
        static Singleton instance;
        return instance;
    }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

 private:
    Singleton() {
        std::cout<<"Singleton Construct!"<<std::endl;
        std::cout<<std::this_thread::get_id()<<std::endl;
    }
};

#endif  // SINGLETON_H_