#ifndef GARDENER_H
#define GARDENER_H
#include"FlowersBouquet.h"
#include"Person.h"
class Gardener:public Person{ 
    public:
    Gardener(std::string myname);
    FlowersBouquet* prepareBouquet(std::vector<std::string>myb);
};

#endif