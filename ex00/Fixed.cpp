#include "Fixed.hpp"

//Copy constructor
Fixed::Fixed (const Fixed& fixed)
{
	std::cout << "Copy constructor called.\n";
	this->_fixedPointNbr = fixed._fixedPointNbr;
}

//Copy constructor (calls assignment operator)
// Fixed::Fixed (const Fixed& fixed)
// {
// 	std::cout << "Copy constructor called.\n";
// 	*this = fixed;
// }

//Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &fixed)
		this->_fixedPointNbr = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed() : _fixedPointNbr(0)
{
	std::cout << "Default constructor called.\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called.\n";
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called.\n";
	return (this->_fixedPointNbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called.\n";
	this->_fixedPointNbr = raw;
}
