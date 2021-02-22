#include <iostream>
#include <string>
using namespace std;

struct Point
{
    Point(int x, int y) : x_(x), y_(y) {}
    int x_ = 0;
    int y_ = 0;
};

class Nation
{
private:
    Point pos_;
    string name_;
    int gold_;
    int soldiers_;

public:
    Nation(Point pos, string name) : pos_(pos), name_(name) {}
    void set_gold(int gold);
    int get_gold();
    void set_soldiers(int soldiers);
    int get_soldiers();
    string get_name();
    void get_pose();
    void colonize();
    void lose();
};

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

int main()
{
    Nation A({0, 0}, "France");
    Nation B({10, 10}, "Germany");
    A.set_soldiers(5000);
    B.set_soldiers(1000);
    fight(A, B);
}

string Nation::get_name()
{
    return name_;
}

void Nation::lose()
{
    cout << this->get_name() << " Lost !";
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
void Nation::get_pose() {}
void Nation::colonize() {}