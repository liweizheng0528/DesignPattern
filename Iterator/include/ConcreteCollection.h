#ifndef CONCRETE_COLLECTION_H_
#define CONCRETE_COLLECTION_H_

#include <vector>
#include <string>
#include <memory>
#include "Collection.h"
#include "ConcreteIterator.h"


class SkyworthTelevision : public Television{
    private:
    std::vector<std::string> tvs_;

    public:
    std::shared_ptr<TVIterator> createIterator(){
        return std::make_shared<SkyworthIterator>(tvs_);
    }
    void addItem(std::string item){
        tvs_.push_back(item);
    }
};







#endif //CONCRETE_COLLECTION_H_