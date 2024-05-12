#include "Serializer.hpp"
#include "Data.hpp"
#include <stdint.h>

int main(){
    Serializer serializer;
    Data *data = new Data;
    data->smth = "data";
    uintptr_t u = serializer.serialize(data);
    Data *data2 = serializer.deserialize(u);
    std::cout << data2->smth << std::endl;
}