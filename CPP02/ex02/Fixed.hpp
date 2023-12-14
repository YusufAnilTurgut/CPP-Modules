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
	Fixed& operator=(const Fixed& rhs);
	bool operator>(const Fixed& rhs);
	bool operator<(const Fixed& rhs);
	bool operator>=(const Fixed& rhs);
	bool operator<=(const Fixed& rhs);
	bool operator==(const Fixed& rhs);
	bool operator!=(const Fixed& rhs);
	float operator+(const Fixed& rhs);
	float operator-(const Fixed& rhs);
	float operator*(const Fixed& rhs);
	float operator/(const Fixed& rhs);
	Fixed operator++(int); //post increment
	Fixed operator--(int);
	Fixed operator++(void);// pre decrement
	Fixed operator--(void); 
	static Fixed& min(Fixed &a, Fixed&b);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

};

	std::ostream &operator << (std::ostream &m_operator, const Fixed &fixed);
#endif 