#include"DeliveryPerson.h"
DeliveryPerson::DeliveryPerson(std::string myname):Person(myname){}
 void DeliveryPerson::delivr(Person* to,FlowersBouquet* order){
 std::cout<<"Delivery Person "<<getName()<<" delivers flowers "<< to->getName()<<".\n";
 to->acceptFlowers(order);
 }