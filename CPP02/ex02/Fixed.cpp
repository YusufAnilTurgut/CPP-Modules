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

Fixed& Fixed::operator=(const Fixed& rhs) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nbr = rhs.getRawBits();
	return *this;
}

Fixed::Fixed(const float nbr)
{
	this->nbr = roundf(nbr * (1 << this->bits));
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	this->nbr = f.nbr;
	std::cout << "Copy constructor called" << std::endl;
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

int Fixed::toInt(void) const
{
    return ((int)this->nbr / (int)(1 << this->bits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->nbr / (float)(1 << this->bits));
}



/////////////////////////////////////////////////////////


bool Fixed::operator>(const Fixed& rhs)
{
	std::cout << "> operator called" << std::endl;
	if (this->toFloat() > rhs.toFloat())
		return true;
	else 
		return false;
}

bool Fixed::operator<(const Fixed& rhs)
{
	std::cout << "< operator called" << std::endl;
	if (this->toFloat() < rhs.toFloat())
		return true;
	else 
		return false;
}

bool Fixed::operator<=(const Fixed& rhs)
{
	std::cout << "<= operator called" << std::endl;
	if (this->toFloat() <= rhs.toFloat())
		return true;
	else 
		return false;
}

bool Fixed::operator>=(const Fixed& rhs)
{
	std::cout << ">= operator called" << std::endl;
	if (this->toFloat() >= rhs.toFloat())
		return true;
	else 
		return false;
}

bool Fixed::operator==(const Fixed& rhs)
{
	std::cout << "== assignment operator called" << std::endl;
	if (this->toFloat() == rhs.toFloat())
		return true;
	else 
		return false;
}

bool Fixed::operator!=(const Fixed& rhs)
{
	std::cout << "!= operator called" << std::endl;
	if (this->toFloat() != rhs.toFloat())
		return true;
	else 
		return false;
}

float Fixed::operator+(const Fixed& rhs)
{
	std::cout << "+ operator called" << std::endl;
	return this->toFloat() + rhs.toFloat(); 
}

float Fixed::operator-(const Fixed& rhs)
{
	std::cout << "- operator called" << std::endl;
	return this->toFloat() - rhs.toFloat(); 
}

float Fixed::operator*(const Fixed& rhs)
{
	std::cout << "* operator called" << std::endl;
	return this->toFloat() * rhs.toFloat(); 
}

float Fixed::operator/(const Fixed& rhs)
{
	std::cout << "/ operator called" << std::endl;
	return this->toFloat() / rhs.toFloat(); 
}

Fixed Fixed::operator++(int) //post increment
{
	Fixed temp = *this;
    this->nbr++;
    return temp;
}

Fixed Fixed::operator--(int) //post decrement
{
	Fixed temp = *this;
    this->nbr--;
    return temp;
}

Fixed Fixed::operator++(void) //pre increment
{
    this->nbr++;
	return *this;
}

Fixed Fixed::operator--(void) //pre decrement
{
    this->nbr--;
	return *this;
}

Fixed &Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return f1;
	else
		return f2;
}


const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return f1;
	else
		return f2;
}

Fixed &Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return f1;
	else
		return f2;
}


const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return f1;
	else
		return f2;
}


std::ostream	&operator << (std::ostream &m_operator, const Fixed &fixed)
{
    m_operator << fixed.toFloat();
    return m_operator;
}

