#include<string>
#include<iostream>
#include"nation.hpp"

Nation::Nation(std::string name ): name_(name){}

std::string Nation::get_name()
{
    return name_;
}

void Nation::lose()
{
    std::cout << this->get_name() << " Lost !";
}

void Nation::set_gold(int gold)
{
}
int Nation::get_gold()
{
}
void Nation::set_soldiers(int soldiers)
{
    soldiers_=soldiers;
}
int Nation::get_soldiers() 
{
    return soldiers_;
}
std::vector<Land> Nation::get_territory()
{
    return territory_;
}
void Nation::set_territory(std::vector<Land> new_territory)
{
    territory_=new_territory;
}