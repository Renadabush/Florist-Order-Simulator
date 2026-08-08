#include<iostream>
#include<string>
#include"person.h"
#include"Wholesaler.h"
#include"Grower.h"
#include"Gardener.h"
#include"DeliveryPerson.h"
#include"FlowerArranger.h"
#include"Florist.h"
#include"FlowersBouquet.h"

int main(){
    std::vector<std::string> flowers={"Roses","Violets","Gladiolus"};
    Person* Chris=new Person("Chris");
    Gardener* Garett=new Gardener("Garett");
    Grower* Gray=new Grower("Grey",Garett);
    DeliveryPerson* Dylan=new DeliveryPerson("Dylan");
    Wholesaler* Watson=new Wholesaler ("Watson",Gray);
    FlowerArranger* Flora=new FlowerArranger("Flora");
    Florist* Fred=new Florist("Fred",Watson,Flora,Dylan);
    Person* Robin=new Person("Robin");
    Chris->orderFlowers(Fred,Robin,flowers);
    delete Chris;
    delete Garett;
    delete Gray;
    delete Dylan;
    delete Watson;
    delete Flora;
    delete Fred;
    delete Robin;
    
}