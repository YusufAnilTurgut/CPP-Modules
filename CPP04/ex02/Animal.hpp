#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& old); 
	Animal& operator=(const Animal& rhs);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif