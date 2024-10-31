#include "Fixed.hpp"

//Copy constructor
Fixed::Fixed (const Fixed& fixed)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_fixedPointNbr = fixed._fixedPointNbr;
}

//Copy constructor
// Fixed::Fixed (const Fixed& fixed)
// {
// 	std::cout << "Copy constructor called." << std::endl;
// 	*this = fixed;
// }

//Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &fixed)
		this->_fixedPointNbr = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed() : _fixedPointNbr(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called." << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->_fixedPointNbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->_fixedPointNbr = raw;
}
