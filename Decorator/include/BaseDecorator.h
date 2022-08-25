#ifndef BASE_DECORATOR_H_
#define BASE_DECORATOR_H_

#include <string>
#include "Component.h"


class DataSourceDecorator:public DataSource{
    public:
    // DataSourceDecorator()=delete;
    DataSourceDecorator(DataSource* ds):datasource_(ds){}
    void writeData(std::string data){
        datasource_->writeData(data);
    }
    protected:
    DataSource* datasource_;
};







#endif //BASE_DECORATOR_H_