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
void Nation::colonize() {}
