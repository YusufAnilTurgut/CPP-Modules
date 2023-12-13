
#include "foo.hpp"

foo::foo(int size) //constructor.
{
	this->size = size;
	this->arr = new int[size];
	std::cout << "Constructor called" << std::endl;
}

foo::~foo() // destructor;
{
		delete[] arr;
		std::cout << "Destructor called" << std::endl;
}

foo::foo(const foo& c) // copy constructor.
{
	this->size = c.size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->arr[i] = c.arr[i];
	}
	std::cout << "Copy cconstructor called" << std::endl;
	
}

const foo& foo::operator=(const foo& rhs) //operator overloading
{
	if (this != &rhs)
	{
		delete[] this->arr;
		this->size = rhs.size;
		this->arr = new int[rhs.size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = rhs.arr[i];
		}
	}
	std::cout << "Assigment operator called" << std::endl;
	return *this;
}






#include <iostream>
int main()
{
	foo a(5);
	foo b(6);
	foo z(7);

	std::cout << "Hello World" << std::endl;
	for (int i = 0; i < a.size; i++)
	{
		a.arr[i] = i * i;
	}
	for (int i = 0; i < a.size; i++)
	{
		std::cout << a.arr[i] << " " <<std::endl;
	}

	b = z = a;
	for (int i = 0; i < b.size; i++)
	{
		std::cout << b.arr[i] << " " <<std::endl;
	}
	std::cout << "Hello World" << std::endl;
}
