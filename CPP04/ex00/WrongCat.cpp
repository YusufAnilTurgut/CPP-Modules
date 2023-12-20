#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}


WrongCat::WrongCat(const WrongCat& old) : WrongAnimal()
{
	this->type = old.type;
	std::cout << "Copy WrongCat constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow meow" << std::endl;
}