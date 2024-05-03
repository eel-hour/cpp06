#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class  ScalarConverter{
    std::string con;
    public:
    ScalarConverter(std::string &con){
        this->con = con;
    };
    ScalarConverter(ScalarConverter &scalarConverter){
        this->con = scalarConverter.con;
    };
    ~ScalarConverter(){
        
    };
}

#endif