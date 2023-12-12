
#include "Harl.hpp"

int main()
{
	Harl a = Harl();
	a.complain("ERROR");
	a.complain("DEBUG");
	a.complain("WARNING");
	a.complain("INFO");
	a.complain("asdad");
	a.complain("");
}
