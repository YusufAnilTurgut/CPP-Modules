#include <iostream>

void hi()
{
	std::cout << "Hello " <<  std::endl;
}

void hi(std::string name)
{
	std::cout << name << std::endl;
}

int main()
{
	hi();
	hi("Hello World");
}