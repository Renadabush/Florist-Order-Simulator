#include"Florist.h"
#include<iostream>
Florist::Florist(std::string name,Wholesaler* wholesaler,FlowerArranger* flowerArranger,DeliveryPerson* deliveryPerson):Person(name),wholesaler(wholesaler),flowerArranger(flowerArranger),deliveryPerson(deliveryPerson){}
void Florist::acceptOrder(Person* to ,std::vector<std::string> theOrder){
std::cout<<"Florist "<<getName()<<" forwards request to Wholesaler "<<wholesaler->getName()<<".\n";
FlowersBouquet *output =wholesaler->acceptOrder(theOrder);
std::cout<<"Wholesaler "<<wholesaler->getName()<<" returns flowers to Florist "<<getName()<<".\n";
std::cout<<"Florist "<<getName()<<" request flowers arrangement from Flower Arranger "<<flowerArranger->getName()<<".\n";
flowerArranger->arrangeFlowers(output);
std::cout<<"Florist "<<getName()<<" forwards flowers to Delivery Person "<<deliveryPerson->getName()<<".\n";
deliveryPerson->delivr(to,output);
}