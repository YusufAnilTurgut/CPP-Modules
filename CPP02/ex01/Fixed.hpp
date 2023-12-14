#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int nbr;
	static int const bits = 8;
public:
	Fixed(); 
	Fixed(const int);
	Fixed(const float);
	~Fixed(); 
	Fixed(const Fixed&); 
	const Fixed& operator=(const Fixed& rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

};

	std::ostream &operator << (std::ostream &m_operator, const Fixed &fixed);
#endif 