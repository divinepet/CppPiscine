#pragma once

#include <iostream>

using std::string;
using std::cout;


class Fixed {
    int fixedPoint;
    static const int factorialBits = 8;
public:
    Fixed();
    Fixed(Fixed const &fixed);
    Fixed& operator= (const Fixed &fixed);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
};

