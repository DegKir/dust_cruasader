#include<string>
class Nation
{
private:
    std::string name_;
    int gold_;
    int soldiers_;

public:
    Nation(std::string );
    void set_gold(int );
    int get_gold();
    void set_soldiers(int );
    int get_soldiers();
    std::string get_name();
    void colonize();
    void lose();
};