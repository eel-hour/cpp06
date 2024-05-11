#ifndef SERIALIZER
#define SERIALIZER

#include "Data.hpp"

class Serializer{
    public:
        Serializer();
        Serializer(SERIALIZER &seri);
        Serializer &operator=(Serializer &seri);
        ~Serializer();
        Data* deserialize(uintptr_t raw);
        uintptr_t serialize(Data* ptr);
}
#endif