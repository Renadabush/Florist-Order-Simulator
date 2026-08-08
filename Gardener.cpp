#include<iostream>
#include"Gardener.h"
Gardener::Gardener(std::string myname):Person(myname){}
FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> myflower){
    std::cout<<"Gardener "<<getName()<<" prepares flowers"<<".\n";
    FlowersBouquet *output=new FlowersBouquet(myflower);
    return output;
}
