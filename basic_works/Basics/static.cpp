#include <iostream>

class Gamer{

	
public: 
	static int count;
	int id;
	std::string name;
	static void print_count()
	{
		std::cout << "Gamer count is : " << Gamer::count << std::endl;
	}
	Gamer(int id, std::string name)
	{
		this->id = id;
		this->name = name;
		count++;
	}
};
int Gamer::count = 0;
int main()
{
	
	Gamer *g1 = new Gamer(5, "Anil");
	Gamer *g2 = new Gamer(4, "Yusuf");

	Gamer::print_count();

}