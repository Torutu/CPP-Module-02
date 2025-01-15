#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const _x;
    Fixed const _y;

public:
    // Constructors and Destructor
    Point();
    Point(const float x, const float y);
    Point(const Point& other);
    ~Point();

    // Operator Overload
    Point& operator=(const Point& other);

    // Getters
    Fixed getX() const;
    Fixed getY() const;
};

// bsp function declaration
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
