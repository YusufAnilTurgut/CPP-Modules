#include "Fixed.hpp"

Fixed::Fixed()
{
	this->nbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->nbr = n * (1 << this->bits);
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	this->nbr = roundf(nbr * (1 << this->bits));
	std::cout << "Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits func called" << std::endl;
	return this->nbr;
}

void Fixed::setRawBits( int const raw )
{
	this->nbr = raw;
}

Fixed::Fixed(const Fixed& f)
{
	this->nbr = f.nbr;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nbr = rhs.getRawBits();
	return *this;
}

int Fixed::toInt(void) const
{
    return ((int)this->nbr / (int)(1 << this->bits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->nbr / (float)(1 << this->bits));
}

std::ostream	&operator << (std::ostream &m_operator, const Fixed &fixed)
{
    m_operator << fixed.toFloat();
    return m_operator;
}