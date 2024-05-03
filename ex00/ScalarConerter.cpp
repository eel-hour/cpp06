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
       std::cout << "'" << (char)(std::stoi(con)) << "'" << std::endl;
    else 
        std::cout << "Non displayable" << std::endl;
}

void print_int(std::string con)
{
    std::cout << "int: ";
    
    std::cout << (int)(std::stod(con)) << std::endl;
}

void print_float(std::string con)
{%
    bool trigger = false;
    double tmp = (double)(std::stod(con));
    double tmp_2 = 1;
    while (tmp >= tmp_2)
        tmp = tmp - tmp_2;
    if (!tmp)
        trigger = true;
    std::cout << "float : ";
    std::cout << (double)(std::stod(con));
    if (trigger)
        std::cout << ".0" << 'f' << std::endl;
    else
        std::cout << 'f' << std::endl;
}

void print_double(std::string con)
{
    bool trigger = false;
    double tmp = (double)(std::stod(con));
    double tmp_2 = 1;
    while (tmp >= tmp_2)
        tmp = tmp - tmp_2;
    if (!tmp)
        trigger = true;
    std::cout << "double : ";
    std::cout << (double)(std::stod(con));
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
    con = std::to_string((int)con[0]);
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

bool is_float(std::string con)
{
    bool trigger = false;
    for (int i = 0; con[i]; i++){
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

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Enter corrrect arguments" << std::endl;
        return (1);
    }
    std::string con(av[1]);
    if (con == "-inff")
        _inff();
    // else if (con = "+inff")
    //     inff();
    else if (con == "-inf")
        _inff();
    // else if (con = "+inf")
    //     inf();
    // else if (con = "nanf")
    //     nanf();
    // else if (con = "nan")
        // nan();
    else if (is_all_digits(con))
        from_int(con);
    else if (con.length() == 1)
        from_char(con);
    else if (is_float(con))
        from_int(con);
}