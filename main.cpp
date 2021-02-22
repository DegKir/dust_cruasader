#include <iostream>
#include <string>
#include "nation.hpp"

using namespace std;

void fight(Nation , Nation );

int main()
{
    Nation A("France");
    Nation B("Germany");
    A.set_soldiers(5000);
    B.set_soldiers(1000);
    fight(A, B);
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