#ifndef FOO_HPP
#define FOO_HPP

#include <iostream>

class foo
{
public:
	int size;
	int *arr ;
	foo(); // default constructor.
	foo(int size); // constructor.
	foo(const foo&); //copy constructor.
	~foo(); // default desructor.
	const foo& operator=(const foo& rhs); // operator overloading
};




#endif