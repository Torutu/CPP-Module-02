#include "Fixed.hpp"

int main() {
    Fixed a; // Default constructor called
    Fixed b(a); // Copy constructor called
    Fixed c; // Default constructor called

    c = b; // Copy assignment operator called

    std::cout << a.getRawBits() << std::endl; // getRawBits member function called
    std::cout << b.getRawBits() << std::endl; // getRawBits member function called
    std::cout << c.getRawBits() << std::endl; // getRawBits member function called

    return 0;
}
