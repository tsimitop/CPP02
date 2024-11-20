#ifndef FIXED_H
#define FIXED_H

# include <iostream>
# include <string>

class Fixed
{
private:
	int	_fixedPointNbr;
	static const int _fractionalBitsNbr = 8;
public:
	Fixed();								//Default constructor
	Fixed(const Fixed& fixed);				//Copy constructor
	~Fixed();								//Destructor
	Fixed& operator=(const Fixed& fixed);	//Copy assignment operator

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif