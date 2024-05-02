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
{
    std::cout << "float : ";
    
    std::cout << (std::stof(con)) << 'f' << std::endl;
}

void from_int(std::string con)
{
    print_char(con);
    print_int(con);
    print_float(con);
    // print_double(con);
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

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Enter corrrect arguments" << std::endl;
        return (1);
    }
    std::string con(av[1]);
    // bool inti = false;
    bool chara = false;
    // bool floa = false;
    // bool doubl = false;
    if (is_all_digits(con))
        from_int(con);
    // else if (con.length() == 1)
    //     from_char;
    //     // chara = true;
    // else if (is_float(con))
    //     print_float(con);
    // // if (inti)
    // //     from_int(con);
}