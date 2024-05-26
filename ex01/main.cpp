#include "Serializer.hpp"
#include "Data.hpp"
#include <stdint.h>

int main(){
    Data *data = new Data;
    data->smth = "data";
    uintptr_t u = Serializer::serialize(data);
    Data *data2 = Serializer::deserialize(u);
    std::cout << data2->smth << std::endl;
}