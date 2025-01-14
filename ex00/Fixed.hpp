// Fixed.hpp
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _fixedPointValue;               // Fixed-point number value
    static const int _fractionalBits;  // Number of fractional bits (always 8)

public:
    // Default constructor
    Fixed();

    // Copy constructor
    Fixed(const Fixed &other);

    // Copy assignment operator
    Fixed &operator=(const Fixed &other);

    // Destructor
    ~Fixed();

    // Getters and setters for raw bits
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif // FIXED_HPP
