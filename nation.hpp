#include<string>
#include<vector>
#include"land.hpp"
class Nation
{
private:
    std::string name_;
    int gold_;
    int soldiers_;
    std::vector<Land> territory_;

public:
    Nation(std::string);
    void set_gold(int );
    int get_gold();
    void set_soldiers(int );
    int get_soldiers();
    std::string get_name();
    std::vector<Land> get_territory();
    void set_territory(std::vector<Land>);
    void lose();
};