/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:15:42 by walnaimi          #+#    #+#             */
/*   Updated: 2025/02/13 14:15:42 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
    Fixed a; // Default constructor called
    Fixed b(a); // Copy constructor called
    Fixed c; // Default constructor called

    c = b; // Copy assignment operator called using the class operator=

    std::cout << a.getRawBits() << std::endl; // getRawBits member function called
    std::cout << b.getRawBits() << std::endl; // getRawBits member function called
    std::cout << c.getRawBits() << std::endl; // getRawBits member function called

    return 0;
}
