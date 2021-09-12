#pragma once

#include "Fixed.hpp"
#include <iostream>

using std::string;
using std::cout;

class Point {
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(Point const &point);
    Point(const float x, const float y);
    Point& operator= (const Point &point);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);