#include"Grower.h"
#include<iostream>
Grower::Grower(std::string myname,Gardener* gardner):Person(myname),gardner(gardner){}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> myf){
    std::cout<<"Grower "<<getName()<<" forwards the request to Gardener "<<gardner->getName()<<".\n";
    FlowersBouquet *myp=(*gardner).prepareBouquet(myf);
    std::cout<<"Gardener "<<gardner->getName()<<" returns flowers to Grower "<<getName()<<".\n";
   return myp;
}