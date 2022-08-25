#ifndef CONCRETEPROTOTYPE_H_
#define CONCRETEPROTOTYPE_H_

#include <iostream>
#include <string>
#include "Prototype.h"

class Attachment
{
private:
    std::string content_;
public:
    Attachment(){}
    Attachment(std::string content):content_(content){}
    std::string get_content(){
        return content_;
    }
    void set_content(std::string str){
        content_ = str;
    }
};

class Email:public Object
{
private:
    std::string text_;
    Attachment* attachment_ = nullptr;
public:
    Email(){};
    Email(std::string text,std::string attachment_content):text_(text){
        attachment_ = new Attachment();
        attachment_->set_content(attachment_content);
    }
    ~Email(){
        if (attachment_!=nullptr)
        {
            delete attachment_;
            attachment_=nullptr;
        }
        
    }
    void display(){
        std::cout<<"-----email begin-----"<<std::endl;
        std::cout<<"text: "<<text_<<std::endl;
        std::cout<<"attachment: "<<attachment_->get_content()<<std::endl;
        std::cout<<"-----email end-----"<<std::endl;
    }
    Email* clone() override{
        return new Email(text_,attachment_->get_content());
    }
    void changeText(std::string new_text) {
        text_ = new_text;
    }
    void changeAttachment(std::string content) {
        attachment_->set_content(content);
    }
};


#endif //CONCRETEPROTOTYPE_H_