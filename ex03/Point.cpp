/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:15:19 by walnaimi          #+#    #+#             */
/*   Updated: 2025/02/13 14:15:19 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default Constructor
Point::Point() : _x(0), _y(0) {}

// Parameterized Constructor
Point::Point(const float x, const float y) : _x(x), _y(y) {}

// Copy Constructor
Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

// Destructor
Point::~Point() {}

// Copy Assignment Operator
Point& Point::operator=(const Point& other) {
    // Since x and y are const, assignment is not allowed.
    // Only returning *this to comply with the canonical form.
    (void)other;
    return *this;
}

// Getters
Fixed Point::getX() const { return _x; }
Fixed Point::getY() const { return _y; }
