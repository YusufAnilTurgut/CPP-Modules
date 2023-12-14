#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int nbr;
	static int const bits = 8;
public:
	Fixed(); // default constructor
	~Fixed(); // destructor
	Fixed(const Fixed&); // copy constructor
	const Fixed& operator=(const Fixed& rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif 