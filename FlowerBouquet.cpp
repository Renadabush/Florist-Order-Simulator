#include"FlowersBouquet.h"
#include<string>
#include<vector>
FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet):bouquet(bouquet),is_arrange(false){}
void FlowersBouquet::arrange(){
is_arrange=true;
}
std::vector<std::string> FlowersBouquet::getBouquet(){
    return bouquet;
}