## ex00: Fixed Class

This exercise teaches the basics of object-oriented programming in C++ through the implementation of the `Fixed` class. You will learn how to:

- Use **constructors** to initialize objects.
- Implement a **copy constructor** for object duplication.
- Overload the **assignment operator** to assign one object to another correctly.
- Implement a **destructor** to manage cleanup when an object is destroyed.

The goal is to practice managing object lifecycles and understanding how C++ handles copying and assignment operations.

## ex01 - Fixed Class with Conversion and Operator Overloading

This exercise focuses on working with constructors, destructors, and operator overloading in C++. The `Fixed` class demonstrates:

- **Constructors**: Default, integer, and float constructors that convert inputs to fixed-point values.
- **Copy Constructor and Assignment Operator**: Enables object duplication and assignment.
- **Methods**: Convert to float (`toFloat()`) and integer (`toInt()`), and manage raw bits (`getRawBits()`).
- **Operator Overloading**: Overloads the `<<` operator to print the fixed-point value as a float.

The goal is to practice constructing objects, converting between data types, and customizing behavior with operators in C++.

## ex02 - Fixed Class with Operator Overloading

This exercise demonstrates the implementation of a `Fixed` class with the following features:

- **Constructors**: Default, integer, and float constructors, as well as a copy constructor.
- **Assignment Operator**: Overloaded to handle assignment between objects.
- **Comparison Operators**: Overloaded for relational operations (`>, <, >=, <=, ==, !=`).
- **Arithmetic Operators**: Includes addition, subtraction, multiplication, and division.
- **Increment/Decrement Operators**: Pre- and post-increment and decrement.
- **Static Functions**: `min` and `max` functions to return the minimum and maximum of two `Fixed` objects.
- **Stream Insertion Operator**: Overloaded to output `Fixed` objects as floating-point values.

This exercise covers object manipulation, operator overloading, and basic arithmetic with fixed-point values.

## Triangle Point Inclusion (BSP Function) & Fixed Class

This project implements a **Barycentric Subdivision Point-in-Triangle (BSP) Test** using the `Point` class and a **Fixed-point arithmetic** `Fixed` class.

### `Point` Class
- Represents a 2D point.
- Used to test if a given point lies inside, outside, or on the edge of a triangle.

### `Fixed` Class
- Implements fixed-point arithmetic with 8 fractional bits.
- Supports constructors, operator overloads, and static functions for mathematical operations.
- Provides conversion methods to float and integer.

### BSP Function
- **Test**: Checks if a point lies inside a triangle by comparing areas.

### Usage
1. Test if a point lies inside a triangle using the `bsp` function.
2. Arithmetic operations are handled with `Fixed` class objects.

https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/

---

### How to run the exercise
1.Clone the repository, from the top right "<> code"
2.Compile each exercise using the command "make" on the terminal inside each directory.
