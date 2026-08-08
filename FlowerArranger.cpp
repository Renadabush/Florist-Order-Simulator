#include"FlowerArranger.h"
#include<iostream>
FlowerArranger::FlowerArranger(std::string myname):Person(myname){}
void FlowerArranger::arrangeFlowers(FlowersBouquet* flowers){
(*flowers).arrange();
std::cout<<"Flower Arranger "<<getName()<<" arranges flowers"<<".\n";
}