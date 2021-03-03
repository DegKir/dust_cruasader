#include <iostream>
#include <string>
#include "nation.hpp"
#include <chrono>
using namespace std;

void fight(Nation , Nation );
void init();
void update();
void render();
vector<Nation> nations;

int main()
{

    return 0;
}

void init()
{
    Nation A("German");
    Nation B("France");
    nations.push_back(A);
    nations.push_back(B);
}

void update()
{
    for (int i; i< 2;i++)
    {
        nations[i].collect_gold();
        nations[i].buy_soldiers();
    }
}
void fight(Nation A, Nation B)
{
    if(A.get_soldiers()>B.get_soldiers())
    {
        A.set_soldiers(A.get_soldiers()-1000);
        B.set_soldiers(B.get_soldiers()-2000);
    }
    else
    {
        A.set_soldiers(A.get_soldiers()-2000);
        B.set_soldiers(B.get_soldiers()-1000);
    }
    if (A.get_soldiers() <= 0)
        A.lose();
    if (B.get_soldiers() <= 0)
    {
        B.lose();
    }
}