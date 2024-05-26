#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class  ScalarConverter{
    // std::string con;
    // std::string type;
    ScalarConverter();
    ScalarConverter(ScalarConverter &scalarConverter);
    ScalarConverter &operator=(ScalarConverter &scalarConverter);
    ~ScalarConverter();
    public:
    static void convert(std::string con);
};

#endif