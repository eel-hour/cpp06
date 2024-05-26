#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t u = reinterpret_cast<uintptr_t>(ptr);
    return u;
}

Data* Serializer::deserialize(uintptr_t raw){
    Data *d = reinterpret_cast<Data *>(raw);
    return d;
}