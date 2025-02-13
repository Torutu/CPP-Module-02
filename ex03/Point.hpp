/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:15:21 by walnaimi          #+#    #+#             */
/*   Updated: 2025/02/13 14:24:43 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const _x;
    Fixed const _y;

public:
    // Constructors and Destructor
    Point();//A default constructor that initializes x and y to 0.
    Point(const float x, const float y);//A constructor that takes as parameters two constant floating-point numbers.It initializes x and y with those parameters.
    Point(const Point& other); //A copy constructor.
    ~Point(); // destructor

    // Operator Overload
    Point& operator=(const Point& other);//A copy assignment operator overload.

    // Getters
    Fixed getX() const;
    Fixed getY() const;
};

// bsp function declaration
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
