#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& old)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = old.ideas[i];
	}
	std::cout << "Copy Brain constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	std::cout << "Brain assigment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}