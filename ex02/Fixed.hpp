#ifndef FIXED_H
 #define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	_fixedPointNbr;
	static const int _fractionalBitsNbr = 8;	
public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed (const Fixed& fixed);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);

	// overload operators
	bool operator<(const Fixed& fixed);
	bool operator>(const Fixed& fixed);
	bool operator<=(const Fixed& fixed);
	bool operator>=(const Fixed& fixed);
	bool operator==(const Fixed& fixed);
	bool operator!=(const Fixed& fixed);

	Fixed operator+(const Fixed& fixed);
	Fixed operator-(const Fixed& fixed);
	Fixed operator*(const Fixed& fixed);
	Fixed operator/(const Fixed& fixed);

	Fixed operator++(int nbr);
	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator--(int nbr);

	//overloaded member functions
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif