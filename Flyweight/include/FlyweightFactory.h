#ifndef FLYWEIGHT_FACTORY_H_
#define FLYWEIGHT_FACTORY_H_


#include <map>
#include <string>
#include <mutex>
#include "Flyweight.h"




class TreeFactory{
    public:
    static TreeFactory* getInstance(){
        if(instance_==nullptr){
            mutex_.lock();
            if(instance_==nullptr){
                instance_ = new TreeFactory();
            }
            mutex_.unlock();
        }
        return instance_;
    }

    TreeType* getTreeType(std::string name, std::string color,std::string texture){
        std::string key = name + "_" + color + "_" + texture;
        auto iter = tree_types_.find(key);
        if(iter==tree_types_.end()){
            TreeType* new_tree_type = new TreeType(name,color,texture);
            tree_types_[key]=new_tree_type;
            delete new_tree_type;
            return tree_types_[key];
        }else{
            return iter->second;
        }
    }


    private:
    TreeFactory(){}
    static inline TreeFactory* instance_ = nullptr;
    static inline std::mutex mutex_;

    std::map<std::string,TreeType*> tree_types_;
};




#endif //FLYWEIGHT_FACTORY_H_