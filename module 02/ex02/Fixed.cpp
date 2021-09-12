#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {}

Fixed::Fixed (const int number) : fixedPoint(number << factorialBits) {}

Fixed::Fixed(const float number) : fixedPoint(roundf(number * (1 << factorialBits))) {}

Fixed::Fixed(const Fixed &fixed) : fixedPoint(fixed.fixedPoint) {}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
    return fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    this->fixedPoint = raw;
}

float Fixed::toFloat() const {
    return (float)fixedPoint / (1 << factorialBits);
}

int Fixed::toInt() const {
    return fixedPoint >> factorialBits;
}

Fixed& Fixed::operator= (const Fixed &fixed) {
    if (this == &fixed)
        return *this;
    fixedPoint = fixed.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed &fixed) {
    return out << fixed.toFloat();
}

Fixed Fixed::operator+(Fixed const &fixed) const {
    return Fixed((float)getRawBits() + fixed.getRawBits()) / (1 << factorialBits);
}

Fixed Fixed::operator-(Fixed const &fixed) const {
    return Fixed((float)getRawBits() - fixed.getRawBits()) / (1 << factorialBits);
}

Fixed Fixed::operator*(Fixed const &fixed) const {
    return Fixed(((float)getRawBits() * fixed.getRawBits()) / (1 << factorialBits * 2));
}

Fixed Fixed::operator/(Fixed const &fixed) const {
    return Fixed((((float)getRawBits() / fixed.getRawBits())));
}

bool Fixed::operator>(Fixed const &fixed) const {
    return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(Fixed const &fixed) const {
    return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(Fixed const &fixed) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(Fixed const &fixed) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(Fixed const &fixed) const {
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed const &fixed) const {
    return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator++() {
    fixedPoint++;
    return (*this);
}

Fixed Fixed::operator--() {
    fixedPoint--;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed const Fixed::max(Fixed const &obj1, Fixed const &obj2) {
    return (obj1 > obj2) ? obj1 : obj2;
}

Fixed const Fixed::min(Fixed const &obj1, Fixed const &obj2) {
    return (obj1 > obj2) ? obj2 : obj1;
}

Fixed Fixed::max(Fixed &obj1, Fixed &obj2) {
    return (obj1 > obj2) ? obj1 : obj2;
}

Fixed Fixed::min(Fixed &obj1, Fixed &obj2) {
    return (obj1 > obj2) ? obj2 : obj1;
}
