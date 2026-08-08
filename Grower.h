#ifndef GROWER_H
#define GROWER_H
#include"Gardener.h"
class Grower:public Person{
    private:
    Gardener *gardner;
    public:
    Grower(std::string myname,Gardener* gardener);
    FlowersBouquet* prepareOrder(std::vector<std::string> flowerOrder);
};
#endif