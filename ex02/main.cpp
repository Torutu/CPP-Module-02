/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:07:00 by walnaimi          #+#    #+#             */
/*   Updated: 2025/02/13 14:32:06 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main() {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}

// #include "Fixed.hpp"
// #include <iostream>

// int main() {
//     // Test constructors
//     Fixed a; // Default constructor called
//     Fixed b(10); // Constructor with integer argument
//     Fixed c(5.25f); // Constructor with float argument

//     // Test stream insertion operator
//     std::cout << "a: " << a << std::endl; // Should print 0
//     std::cout << "b: " << b << std::endl; // Should print 10
//     std::cout << "c: " << c << std::endl; // Should print 5.25

//     // Test assignment operator
//     Fixed d;
//     d = c; // Assigning the value of c to d
//     std::cout << "d: " << d << std::endl; // Should print 5.25

//     // Test comparison operators
//     std::cout << "Is b > c? " << (b > c) << std::endl; // Should print 1 (true)
//     std::cout << "Is b < c? " << (b < c) << std::endl; // Should print 0 (false)
//     std::cout << "Is b == c? " << (b == c) << std::endl; // Should print 0 (false)

//     // Test arithmetic operators
//     Fixed sum = b + c; // b + c
//     Fixed diff = b - c; // b - c
//     Fixed prod = b * c; // b * c
//     Fixed quot = b / c; // b / c

//     std::cout << "b + c: " << sum << std::endl; // Should print 15.25
//     std::cout << "b - c: " << diff << std::endl; // Should print 4.75
//     std::cout << "b * c: " << prod << std::endl; // Should print 52.5
//     std::cout << "b / c: " << quot << std::endl; // Should print 1.90476

//     // Test increment and decrement operators
//     std::cout << "a before increment: " << a << std::endl;
//     std::cout << "Pre-increment a: " << ++a << std::endl; // Pre-increment
//     std::cout << "a after increment: " << a << std::endl;

//     std::cout << "a before post-increment: " << a << std::endl;
//     std::cout << "Post-increment a: " << a++ << std::endl; // Post-increment
//     std::cout << "a after post-increment: " << a << std::endl;

//     std::cout << "a before decrement: " << a << std::endl;
//     std::cout << "Pre-decrement a: " << --a << std::endl; // Pre-decrement
//     std::cout << "a after decrement: " << a << std::endl;

//     std::cout << "a before post-decrement: " << a << std::endl;
//     std::cout << "Post-decrement a: " << a-- << std::endl; // Post-decrement
//     std::cout << "a after post-decrement: " << a << std::endl;

//     // Test static functions (min/max)
//     Fixed e(20);
//     Fixed f(30);
//     std::cout << "Min of e and f: " << Fixed::min(e, f) << std::endl; // Should print 20
//     std::cout << "Max of e and f: " << Fixed::max(e, f) << std::endl; // Should print 30

//     // Test conversion functions
//     std::cout << "c as float: " << c.toFloat() << std::endl; // Should print 5.25
//     std::cout << "c as int: " << c.toInt() << std::endl; // Should print 5

//     return 0;
// }
