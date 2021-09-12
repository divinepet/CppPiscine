#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {
    cout << "Default constructor called\n";
}

Fixed::~Fixed() {
    cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &fixed) : fixedPoint(fixed.fixedPoint) {
    cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed &fixed) {
    cout << "Assignation operator called\n";
    fixedPoint = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    cout << "getRawBits member function called\n";
    return fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    cout << "setRawBits member function called\n";
    fixedPoint = raw;
}