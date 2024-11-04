#include "Fixed.hpp"

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
	// std::cout << "Copy constructor called." << std::endl;
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
	// std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float nbr) : _fixedPointNbr(0)
{
	this->_fixedPointNbr = static_cast<int> (roundf(nbr * raisePower(2, _fractionalBitsNbr)));
	// std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed() : _fixedPointNbr(0)
{
	// std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called." << std::endl;
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

//Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed)
{
	// std::cout << "Copy assignment operator called." << std::endl;
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

bool Fixed::operator<(const Fixed& fixed)
{
	return (_fixedPointNbr < fixed._fixedPointNbr);
}

bool Fixed::operator>(const Fixed& fixed)
{
	return (_fixedPointNbr > fixed._fixedPointNbr);
}

bool Fixed::operator<=(const Fixed& fixed)
{
	return (_fixedPointNbr <= fixed._fixedPointNbr);
}

bool Fixed::operator>=(const Fixed& fixed)
{
	return (_fixedPointNbr >= fixed._fixedPointNbr);
}

bool Fixed::operator==(const Fixed& fixed)
{
	return (_fixedPointNbr == fixed._fixedPointNbr);
}

bool Fixed::operator!=(const Fixed& fixed)
{
	return (_fixedPointNbr != fixed._fixedPointNbr);
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits(_fixedPointNbr + fixed._fixedPointNbr);
	return (ret);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits(_fixedPointNbr - fixed._fixedPointNbr);
	return (ret);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits((_fixedPointNbr * fixed._fixedPointNbr) >> _fractionalBitsNbr);
	return (ret);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits(_fractionalBitsNbr << (_fixedPointNbr / fixed._fixedPointNbr));
	return (ret);
}


Fixed& Fixed::operator++(void) //prefix
{
	this->_fixedPointNbr++;
	return (*this);
}


Fixed Fixed::operator++(int) //postfix
{
	Fixed ret(*this); // Create a copy with the original value
	// Fixed ret;

	// ret.setRawBits(this->_fixedPointNbr);
	this->_fixedPointNbr++;
	return (ret);
}


Fixed& Fixed::operator--(void) //prefix
{
	this->_fixedPointNbr--;
	return (*this);
}


Fixed Fixed::operator--(int) //postfix
{
	Fixed ret(*this); // Create a copy with the original value
	// Fixed ret;

	// ret.setRawBits(this->_fixedPointNbr);
	this->_fixedPointNbr--;
	return (ret);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._fixedPointNbr < b._fixedPointNbr)
		return (a);
	else
		return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a._fixedPointNbr < b._fixedPointNbr)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._fixedPointNbr > b._fixedPointNbr)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a._fixedPointNbr > b._fixedPointNbr)
		return (a);
	else
		return (b);
}
