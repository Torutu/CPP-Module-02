/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:15:11 by walnaimi          #+#    #+#             */
/*   Updated: 2025/02/13 14:15:12 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Calculate the signed area of a triangle
static Fixed signedArea(Point const& p1, Point const& p2, Point const& p3) {
    return (p1.getX() * (p2.getY() - p3.getY()) +
            p2.getX() * (p3.getY() - p1.getY()) +
            p3.getX() * (p1.getY() - p2.getY())) /
           Fixed(2);
}

// BSP function
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed areaABC = signedArea(a, b, c);
    Fixed areaPAB = signedArea(point, a, b);
    Fixed areaPBC = signedArea(point, b, c);
    Fixed areaPCA = signedArea(point, c, a);

    // Check if the point lies within the triangle
    if (areaPAB == 0 || areaPBC == 0 || areaPCA == 0)
        return false; // On an edge or vertex

    bool allPositive = (areaABC > 0 && areaPAB > 0 && areaPBC > 0 && areaPCA > 0);
    bool allNegative = (areaABC < 0 && areaPAB < 0 && areaPBC < 0 && areaPCA < 0);

    return allPositive || allNegative;
}
//https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/
