#ifndef FIXED_H
 #define FIXED_H

# include <iostream>
# include <cmath>

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

#endif