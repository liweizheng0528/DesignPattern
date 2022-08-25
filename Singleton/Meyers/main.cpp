#include <iostream>

#include <iostream>
#include <thread>
#include "Singleton.h"

int main() {
    // Singleton s1 = Singleton::GetInstance();
    // Singleton s2 = Singleton::GetInstance();
    auto f = []()->void{Singleton::GetInstance();};
    auto f1 = [](int a){
        std::cout<<a<<std::endl;
    };
    auto f2 = [](){std::cout<<std::this_thread::get_id()<<std::endl;};
    for(int i=0;i<10;i++){
        std::thread(f).join();
    }
    // std::cout << "s1地址: " << s1 << std::endl;
    // std::cout << "s2地址: " << s2 << std::endl;
    return 0;
}