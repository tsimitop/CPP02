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

Fixed::Fixed(const int nbr) : _fixedPointNbr(0)
{
	std::cout << "Constructor that takes a constant integer called." << std::endl;
}

Fixed::Fixed(const float nbr) : _fixedPointNbr(0)
{
	std::cout << "Constructor that takes a constant floating-point number called." << std::endl;
}

Fixed::Fixed() : _fixedPointNbr(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called." << std::endl;
}

float	Fixed::toFloat(void) const
{
	std::cout << "Converts to float." << std::endl;
	return (0.0);
}

int raisePower(int nbr, int exponent)
{
	int	val = nbr;

	for (int i = 0; i < exponent; i++)
		val *= nbr;
	return (val);
}

int		Fixed::toInt(void) const
{
	int ret;

	std::cout << "Converts to int." << std::endl;
	// ret = static_cast <int> (roundf( raisePower(2, this->_fixedPointNbr)));
	return (ret);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
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
