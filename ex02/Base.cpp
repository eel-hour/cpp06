#include "Base.hpp"

bool RandomBool(){
    if (rand() % 2 == 0)
        return true;
    else
        return false;
}

Base *generate(){
    srand(time(0));
    bool i = RandomBool();
    bool j = RandomBool();
    
    if ((i && j) || (!i && !j)){
        Base *base = new C;
        return base;
    }
    else if (j && !i){
        Base *base = new A;
        return base;
    }
    else if (i && !j){
        Base *base = new B;
        return base;
    }
    return NULL;
}

void identify(Base& p){
    bool a = true; bool b = true; bool c = true;
    try {Base i = dynamic_cast <A&>(p);}
    catch(std::bad_cast){a = false;}
    try{Base i = dynamic_cast <B&>(p);}
    catch(std::bad_cast){b = false;}
    try{Base i = dynamic_cast <C&>(p);}
    catch(std::bad_cast){c = false;}
    if (a)
        std::cout << "It's type \"A\"" << std::endl;
    else if (b)
        std::cout << "It's type \"B\"" << std::endl;
    else if (c)
        std::cout << "It's type \"C\"" << std::endl;
}

void identify(Base* p){
    if (dynamic_cast <A *>(p) != NULL )
        std::cout << "It's typo \"A\"" << std::endl;
    else if (dynamic_cast <B *>(p) != NULL )
        std::cout << "It's typo \"B\"" << std::endl;
    else if (dynamic_cast <C *>(p) != NULL )
        std::cout << "It's typo \"C\"" << std::endl;
}

