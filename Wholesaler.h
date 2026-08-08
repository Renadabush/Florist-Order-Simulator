#ifndef WHOLESALER_H
#define WHOLESALER_H
#include"Grower.h"
class Wholesaler:public Person {
    private:
    Grower* grower;
    public:
    Wholesaler(std::string myname,Grower* grower);
    FlowersBouquet* acceptOrder(std::vector<std::string> order);
};
#endif
