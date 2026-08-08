#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
#include"FlowersBouquet.h"
class Florist;

class Person{
private:
std::string name;
public:
Person(std::string name);
std::string getName();
void acceptFlowers(FlowersBouquet* gift);
void orderFlowers(Florist* florist,Person* sendto, std::vector<std::string> order);
std::string printvector(std::vector<std::string> myv);
};
#endif