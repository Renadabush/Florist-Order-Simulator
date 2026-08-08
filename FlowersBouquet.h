#ifndef FlowersBouquet_h
#define FlowersBouquet_h
#include<iostream>
#include<string>
#include<vector>
class FlowersBouquet{
private:
std::vector<std::string> bouquet;
bool is_arrange;
public:
FlowersBouquet(std::vector<std::string>bouquet);
void arrange();
std::vector<std::string> getBouquet();
};
#endif