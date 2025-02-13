/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:15:17 by walnaimi          #+#    #+#             */
/*   Updated: 2025/02/13 14:15:17 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);
    Point x(3, 3);
    Point y(10, 10);
    Point z(0, 3);

    std::cout << "Point inside triangle: " << bsp(a, b, c, x) << std::endl;
    std::cout << "Point outside triangle: " << bsp(a, b, c, y) << std::endl;
    std::cout << "Point on edge of triangle: " << bsp(a, b, c, z) << std::endl;

    return 0;
}
