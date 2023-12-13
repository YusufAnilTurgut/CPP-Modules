#include "class01.hpp"


int main()
{
	int i = 5;
	int *ip = new int(5);
	Player *p1 = new Player(1, "Anil", i, ip);
	int a = p1->get_id();
	std::cout << "id :: " << p1->get_name() << " " << p1->get_id() << " "<< p1->ip  <<" " << p1->ref << std::endl;
	
	Player c2 = Player(*p1);
	std::cout << "id :: " << c2.get_name() << " " << c2.get_id() << " " << c2.ip << " " << c2.ref << std::endl;
	system("leaks a.out");
	delete p1;
	delete ip;
	return 0;
	
}