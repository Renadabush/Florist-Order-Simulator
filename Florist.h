#ifndef FLORIST_H
#define FLORIST_H
#include"Wholesaler.h"
#include"FlowerArranger.h"
#include"DeliveryPerson.h"
class Florist:public Person{
private:
Wholesaler* wholesaler;
FlowerArranger* flowerArranger;
DeliveryPerson* deliveryPerson;
public:
Florist(std::string name,Wholesaler* wholesaler,FlowerArranger* flowerArranger,DeliveryPerson* deliveryPerson);
void acceptOrder(Person* to,std::vector<std::string> theOrder);
};
#endif