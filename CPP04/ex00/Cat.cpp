#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}


Cat::Cat(const Cat& old) : Animal()
{
	this->type = old.type;
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}