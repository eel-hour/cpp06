#include "Serializer.hpp"

Serializer::Serializer(){
    std::cout << "Serializer constructor have been called" << std::endl;
}

// Serializer::Serializer(SERIALIZER &seri){
//     std::cout << "Serializer copy constructor have been called" << std::endl;
// }
   
Serializer &Serializer::operator=(Serializer &seri){
    (void)seri;
    std::cout << "Serializer copy assignement operator have been called" << std::endl;
    return *this;
}

Serializer::~Serializer(){
    std::cout << "Serializer destructor have been called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t u = reinterpret_cast<uintptr_t>(ptr);
    return u;
}

Data* Serializer::deserialize(uintptr_t raw){
    Data *d = reinterpret_cast<Data *>(raw);
    return d;
}