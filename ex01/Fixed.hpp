/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:15:36 by walnaimi          #+#    #+#             */
/*   Updated: 2025/02/13 14:15:37 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int _fixedPointValue;              // Fixed-point value
    static const int _fractionalBits = 8;  // Number of fractional bits

public:
    Fixed();                           // Default constructor
    Fixed(const int intValue);         // Constructor for integer input
    Fixed(const float floatValue);     // Constructor for float input
    Fixed(const Fixed &other);         // Copy constructor
    Fixed &operator=(const Fixed &other); // Copy assignment operator
    ~Fixed();                          // Destructor

    int getRawBits() const;            // Get raw fixed-point value
    void setRawBits(int const raw);    // Set raw fixed-point value
    float toFloat() const;             // Convert to floating-point
    int toInt() const;                 // Convert to integer

    // Overload for << operator
    friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
};

#endif
