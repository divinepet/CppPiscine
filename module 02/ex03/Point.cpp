#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(Point const &point) : x(point.x), y(point.y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point &Point::operator=(const Point &point) {
    Point e (point);
    return *this;
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}

Point::~Point() {}
