#ifndef SERIALIZER
#define SERIALIZER

#include "Data.hpp"
#include <iostream>


class Serializer{
        Serializer();
        Serializer(SERIALIZER &seri);
        Serializer &operator=(Serializer &seri);
        ~Serializer();
    public:
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);
};
#endif