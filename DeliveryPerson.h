#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H
#include"Person.h"
class DeliveryPerson:public Person{
public:
 DeliveryPerson(std::string myname);
 void delivr(Person* to,FlowersBouquet*);
};
#endif
