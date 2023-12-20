#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Default animal constructor called" << std::endl;
}


Animal::Animal(const Animal& old)
{
	this->type = old.type;
	std::cout << "Copy animal constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}