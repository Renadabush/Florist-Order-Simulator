#include "Person.h"
#include <iostream>
#include"Florist.h"
Person::Person(std::string name):name(name){}
std::string Person::getName(){
    return name;
}
std::string Person::printvector(std::vector<std::string> myv){
    std::string o="";
    for (int i=0;i<myv.size()-1;i=i+1) {
        o= o+myv[i]+", ";
    }
    o= o+myv[myv.size()-1];
    return o;
}
void Person:: acceptFlowers(FlowersBouquet* gift){
std::cout<<getName()<<" accepts the flowers "<<printvector(gift->getBouquet())<<".\n";
delete gift;
}
void Person:: orderFlowers(Florist* florist,Person* sendto, std::vector<std::string> order){
    std::cout<<getName()<<" orders flowers to "<<sendto->getName()<<" from Florist "<< florist->getName()<<": "<<printvector(order)<<".\n";
    florist->acceptOrder(sendto,order);
}
