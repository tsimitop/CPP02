#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.5f) * Fixed(2));
	// Fixed const b(Fixed(3.45625f)); //check fo roundf

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}

// EXTRA TESTS
// int main(void)
// {
// 	Fixed a(5);
// 	Fixed const b(10);
// 	Fixed c(5);
// 	Fixed const d(10);

// 	std::cout << "Initially a is: " << a << std::endl;

// 	std::cout << "\nPRE-/POST INCREMENT/DECREMENT OPERATIONS\n";
// 	//++a
// 	std::cout << "Performing ++a: a [" << a << "] increases the first time [" << ++a;
// 	std::cout << "] and keeps it same the second time [" << a << "]." << std::endl;
	
// 	//a++
// 	std::cout << "Performing a++: a [" << a << "] is the same the first time [" << a++;
// 	std::cout << "] and increases the second time [" << a << "]." << std::endl;

// 	//--a
// 	std::cout << "Performing --a: a [" << a << "] decreases the first time [" << --a;
// 	std::cout << "] and keeps it same the second time [" << a << "]." << std::endl;
	
// 	//a--
// 	std::cout << "Performing a--: a [" << a << "] is the same the first time [" << a--;
// 	std::cout << "] and decreases the second time [" << a << "]." << std::endl;

// 	std::cout << std::boolalpha; //ENABLE BOOLEAN PRINTING
// 	std::cout << "\nBOOLEAN TESTS\n";
// 	//true
// 	std::cout << "(" << a << " < " << b << ") should be true: " << (a < b) << std::endl;
// 	std::cout << "(" << a << " <= " << b << ") should be true: " << (a <= b) << std::endl;
// 	std::cout << "(" << a << " != " << b << ") should be true: " << (a != b) << std::endl;
// 	std::cout << "(" << a << " == " << c << ") should be true: " << (a == c) << std::endl;

// 	//false
// 	std::cout << "(" << a << " > " << b << ") should be false: " << (a > b) << std::endl;
// 	std::cout << "(" << a << " >= " << b << ") should be false: " << (a >= b) << std::endl;
// 	std::cout << "(" << a << " != " << c << ") should be false: " << (a != c) << std::endl;
// 	std::cout << "(" << a << " == " << b << ") should be false: " << (a == b) << std::endl;
// 	std::cout << std::noboolalpha; // DISABLE BOOLEAN PRINTING
	
// 	//calculations
// 	std::cout << "\nCALCULATIONS\n";
// 	std::cout << a << " + " << b << " = " << a + b << std::endl;
// 	std::cout << a << " - " << b << " = " << a - b << std::endl;
// 	std::cout << a << " * " << b << " = " << a * b << std::endl;
// 	std::cout << a << " / " << b << " = " << a / b << std::endl;

// 	std::cout << "\nMINIMUM AND MAXIMUM\n";
// 	std::cout << "Maximum of (" << a << "," << b << ") = " << Fixed::max(a, b) << std::endl;
// 	std::cout << "Minimum of (" << a << "," << b << ") = " << Fixed::min(a, b) << std::endl;

// 	Fixed		noConstMax(Fixed::max(a, b));	// calls static const Fixed max(const Fixed& a, const Fixed& b);
// 	const Fixed	constMax(Fixed::max(d, b));		// calls static const Fixed max(const Fixed& a, const Fixed& b);

// 	std::cout << "\nnoConstMax is = " << noConstMax << std::endl;
// 	noConstMax = a;	//CAN COMPILE
// 	std::cout << "after assignment noConstMax is = " << noConstMax << std::endl;
// 	std::cout << "constMax is = " << constMax << " and can not change\n";
// 	// constMax = a;	//CAN'T COMPILE

// 	Fixed		noConstMin(Fixed::min(a, c));	// calls static Fixed& min(Fixed& a, Fixed& b)
// 	const Fixed	constMin(Fixed::min(a, c));		// calls static Fixed& min(Fixed& a, Fixed& b)

// 	std::cout << "\nnoConstMin is = " << noConstMin << std::endl;
// 	noConstMin = b;	//CAN COMPILE
// 	std::cout << "after assignment noConstMin is = " << noConstMin << std::endl;
// 	std::cout << "constMin is = " << constMin << " and can not change\n";
// 	// constMin = a;	//CAN'T COMPILE

// 	return 0;
// }
