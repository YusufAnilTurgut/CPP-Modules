#include "class01.hpp"


int main()
{
	Player *p1 = new Player(1, "Anil", "Turgut");
	int a = p1->get_id();
	std::cout << "id :: " << p1->get_name() << p1->get_last_name() << p1->get_id() << std::endl;
	
	return 0;
}