#pragma once

#include <iostream>
#include <cmath>

using std::string;
using std::cout;


class Fixed {
    int fixedPoint;
    static const int factorialBits = 8;
public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    Fixed(Fixed const &fixed);
    ~Fixed();

    Fixed& operator= (const Fixed &fixed);

    int     getRawBits() const;
    void    setRawBits(int const raw);
    float   toFloat() const;
    int     toInt() const;
};

