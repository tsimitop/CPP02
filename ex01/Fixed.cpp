#include "Fixed.hpp"
// #include <iomanip>

float raisePower(int nbr, int exponent)
{
	float	val = 1.0f;

	for (int i = 0; i < exponent; i++)
		val *= nbr;
	return (val);
}

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


Fixed::Fixed(const int nbr) : _fixedPointNbr(0)
{
	this->_fixedPointNbr = nbr << this->_fractionalBitsNbr;
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float nbr) : _fixedPointNbr(0)
{
	this->_fixedPointNbr = static_cast<int> (roundf(nbr * raisePower(2, _fractionalBitsNbr)));
	std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed() : _fixedPointNbr(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

// Converts to int.
int		Fixed::toInt(void) const
{
	int ret;

	ret = this->_fixedPointNbr >> this->_fractionalBitsNbr;
	return (ret);
}

// Converts to float
float	Fixed::toFloat(void) const
{
	float	ret;

	ret = this->_fixedPointNbr / raisePower(2, _fractionalBitsNbr);
	return (ret);
}

//Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &fixed)
		this->_fixedPointNbr = fixed.getRawBits();
	return (*this);
}

// << operator overload
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	// os << std::fixed << std::setprecision(4) << fixed.toFloat();	// #include <iomanip>
	os << fixed.toFloat();
	return (os);
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called." << std::endl;
	return (this->_fixedPointNbr);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called." << std::endl;
	this->_fixedPointNbr = raw;
}
