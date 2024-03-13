// items.cpp

#include "items.hpp"


void Items::Type(const std::string type){
    type_ = type;
}


std::string Items::Type() const{
        return type_;
}


