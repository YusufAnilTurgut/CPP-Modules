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
	Fixed operator++(int); 
	Fixed operator--(int);
	Fixed operator++(void);
	Fixed operator--(void); 
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

	std::ostream &operator << (std::ostream &m_operator, const Fixed &fixed);
#endif 