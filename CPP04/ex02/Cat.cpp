#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}


Cat::Cat(const Cat& old) : Animal()
{
	this->type = old.type;
	this->brain = new Brain(*old.brain);
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = brain;
	}
	std::cout << "Cat copy assigment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}