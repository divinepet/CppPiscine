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
    Fixed operator+(Fixed const &fixed) const;
    Fixed operator-(Fixed const &fixed) const;
    Fixed operator*(Fixed const &fixed) const;
    Fixed operator/(Fixed const &fixed) const;
    bool operator>(Fixed const &fixed) const;
    bool operator<(Fixed const &fixed) const;
    bool operator>=(Fixed const &fixed) const;
    bool operator<=(Fixed const &fixed) const;
    bool operator==(Fixed const &fixed) const;
    bool operator!=(Fixed const &fixed) const;
    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
    static Fixed const max(Fixed const &obj1, Fixed const &obj2);
    static Fixed const min(Fixed const &obj1, Fixed const &obj2);
    static Fixed max(Fixed &obj1, Fixed &obj2);
    static Fixed min(Fixed &obj1, Fixed &obj2);
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);