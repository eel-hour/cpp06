#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <ctime>

class Base
{
    public:
        virtual ~Base(){
            std::cout << "Base destructor has been called" << std::endl;
        };
};

class A : public Base
{
    public:
        ~A(){
            std::cout << "A destructor has been called" << std::endl;
        };
};

class B : public Base
{
    public:
        ~B(){
            std::cout << "B destructor has been called" << std::endl;
        };
};

class C : public Base
{
    public:
        ~C(){
            std::cout << "C destructor has been called" << std::endl;
        };
};

void identify(Base& p);
void identify(Base* p);
Base *generate();
bool RandomBool();

#endif 