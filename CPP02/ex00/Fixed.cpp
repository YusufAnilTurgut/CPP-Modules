#include "Fixed.hpp"

Fixed::Fixed()
{
	this->nbr = 0;
	std::cout << "Default constructor called" << std::endl;
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

const Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nbr = rhs.getRawBits();
	return *this;
}
