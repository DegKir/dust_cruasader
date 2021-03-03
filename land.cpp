#include"land.hpp"

Land::Land(Point position ,Terrain type_of_terrain):
                 position_(position),type_of_terrain_(type_of_terrain) {}

int Land::get_tax()
{
    return tax_;
}