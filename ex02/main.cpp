#include "Fixed.hpp"

// int main(void)
// {
// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max(a, b) << std::endl;
// 	return 0;
// }

// EXTRA TESTS
int main(void)
{
	Fixed a(5);
	Fixed const b(10);
	Fixed c(5);
	Fixed const d(10);

	std::cout << "Initially a is: " << a << std::endl;

	std::cout << "\nPRE-/POST INCREMENTATION/DECREMENTATION\n";
	//++a
	std::cout << "Performing ++a: a [" << a << "] increases the first time [" << ++a;
	std::cout << "] and keeps it same the second time [" << a << "]." << std::endl;
	
	//a++
	std::cout << "Performing a++: a [" << a << "] is the same the first time [" << a++;
	std::cout << "] and increases the second time [" << a << "]." << std::endl;

	//--a
	std::cout << "Performing --a: a [" << a << "] decreases the first time [" << --a;
	std::cout << "] and keeps it same the second time [" << a << "]." << std::endl;
	
	//a--
	std::cout << "Performing a--: a [" << a << "] is the same the first time [" << a--;
	std::cout << "] and decreases the second time [" << a << "]." << std::endl;

	std::cout << std::boolalpha; //ENABLE BOOLEAN PRINTING
	std::cout << "\nBOOLEAN TESTS\n";
	//true
	std::cout << "This should be true: " << (a < b) << std::endl;
	std::cout << "This should be true: " << (a <= b) << std::endl;
	std::cout << "This should be true: " << (a != b) << std::endl;
	std::cout << "This should be true: " << (a == c) << std::endl;

	//false
	std::cout << "This should be false: " << (a > b) << std::endl;
	std::cout << "This should be false: " << (a >= b) << std::endl;
	std::cout << "This should be false: " << (a != c) << std::endl;
	std::cout << "This should be false: " << (a == b) << std::endl;
	std::cout << std::noboolalpha; // DISABLE BOOLEAN PRINTING
	
	//calculations
	std::cout << "\nCALCULATIONS\n";
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;

	// std::cout << b << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}