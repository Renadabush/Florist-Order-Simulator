#include"Wholesaler.h"
Wholesaler:: Wholesaler(std::string myname,Grower* grower):Person(myname),grower(grower){}
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> order){
    std::cout<<"Wholesaler "<<getName()<<" forwards the request to Grower "<<grower->getName()<<".\n";
    FlowersBouquet *flower=grower->prepareOrder(order);
    std::cout<<"Grower "<<grower->getName()<<" returns flowers to Wholesaler "<<getName()<<".\n";
    return flower;
}