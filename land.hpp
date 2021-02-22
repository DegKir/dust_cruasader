class Point
{
    Point(int x, int y);
    int x_;
    int y_;
};

enum Terrain
{
    MOUNTAINS,
    FIELDS,
    RIVERS,
};

class Land
{
    Land(Point, Terrain);
    Point position_;
    Terrain type_of_terrain_;
};