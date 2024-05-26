#include "ScalarConverter.hpp"


bool is_all_digits(std::string& str)
{
    for (int i = 0; str[i]; i++) {
        if (i == 0 && str[i] == '-')
            ;
        else if (!isdigit(str[i]))
            return false; 
    }
    return true;
}

void print_char(std::string con)
{
    std::cout << "char: ";
    if (std::stoi(con) > 32 && std::stoi(con) < 127)
       std::cout << "'" << static_cast<char>(std::stoi(con)) << "'" << std::endl;
    else 
        std::cout << "Non displayable" << std::endl;
}

void print_int(std::string con)
{
    std::cout << "int: ";
    
    std::cout << static_cast<int>(std::stod(con)) << std::endl;
}

void print_float(std::string con)
{
    bool trigger = false;
    double tmp = static_cast<float>(std::stof(con));
    double tmp_2 = 1;
    while (tmp >= tmp_2)
        tmp = tmp - tmp_2;
    if (!tmp)
        trigger = true;
    std::cout << "float : ";
    std::cout << static_cast<float>(std::stof(con));
    if (trigger)
        std::cout << ".0" << 'f' << std::endl;
    else
        std::cout << 'f' << std::endl;
}

void print_double(std::string con)
{
    bool trigger = false;
    double tmp = static_cast<double>(std::stod(con));
    double tmp_2 = 1;
    while (tmp >= tmp_2)
        tmp = tmp - tmp_2;
    if (!tmp)
        trigger = true;
    std::cout << "double : ";
    std::cout << static_cast<double>(std::stod(con));
    if (trigger)
        std::cout << ".0" << std::endl;
    else
        std::cout << std::endl;
}

void from_int(std::string con)
{
    print_char(con);
    print_int(con);
    print_float(con);
    print_double(con);
}

void from_char(std::string con)
{
    con = std::to_string(static_cast<int>(con[0]));
    print_char(con);
    print_int(con);
    print_float(con);
    print_double(con);
}

void from_float(std::string con)
{
    print_char(con);
    print_int(con);
    print_float(con);
    print_double(con);
}

bool is_float(std::string str)
{
    std::string con(str);
    bool trigger = false;
    for (unsigned int i = 0; con[i]; i++){
        if (i == con.length() - 1 && con[i] == 'f')
        ;
        else if (con[i] == '.' && !trigger){
            trigger = true;
        }
        else if (i == 0 && con[i] == '-')
            ;
        else if (!isdigit(con[i]))
            return false; 
    }
    return true;
}

void _inff(){
    std::cout << "int: impossible\nchar: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
}

void inff(){
    std::cout << "int: impossible\nchar: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
}

void nanf(){
    std::cout << "int: impossible\nchar: impossible\nfloat: nanf\ndouble: nan" << std::endl;
}

void ScalarConverter::convert(std::string con)
{
    if (!con[0])
        ;
    else if (con == "-inff" || con == "-inf")
        _inff();
    else if (con == "+inff" || con == "+inf")
        inff();
    else if (con == "-inf")
        _inff();
    else if (con == "nanf")
        nanf();
    else if (con == "nan")
        nanf();
    else if (is_all_digits(con))
        from_int(con);
    else if (con.length() == 1)
        from_char(con);
    else if (is_float(con))
        from_float(con);
}
