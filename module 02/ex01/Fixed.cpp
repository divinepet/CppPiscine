#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {
    cout << "Default constructor called\n";
}

Fixed::Fixed (const int number) : fixedPoint(number << factorialBits) {
    cout << "Int constructor called\n";
}

Fixed::Fixed(const float number) : fixedPoint(roundf(number * (1 << factorialBits))) {
    cout << "Float constructor called\n";
}

Fixed::~Fixed() {
    cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &fixed) : fixedPoint(fixed.fixedPoint) {
    cout << "Copy constructor called\n";
}

int Fixed::getRawBits() const {
    cout << "getRawBits member function called\n";
    return fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    cout << "setRawBits member function called\n";
    fixedPoint = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(fixedPoint) / (1 << factorialBits);
}

int Fixed::toInt() const {
    return fixedPoint >> factorialBits;
}

Fixed& Fixed::operator= (const Fixed &fixed) {
    cout << "Assignation operator called\n";
    if (this == &fixed)
        return *this;
    fixedPoint = fixed.getRawBits();
    return *this;
}