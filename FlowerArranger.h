#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H
#include"Person.h"
class FlowerArranger:public Person{
public:
FlowerArranger(std::string myname);
void arrangeFlowers(FlowersBouquet* flowers);
};
#endif