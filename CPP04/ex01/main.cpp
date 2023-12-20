#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* Animals[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}

	for (int i = 0; i < 4; i++)
	{
			Animals[i]->makeSound();
	}
	
	for (int i = 0; i < 4; i++)
	{
			delete Animals[i];
	}
	
	Dog d1;
	Dog d2;

	d1 = d2;

	Dog d3;
	Dog d4(d3);

	d3 = d4;

return 0;
}
