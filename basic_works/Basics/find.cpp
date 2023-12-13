#include <iostream>


 using namespace std;

int main()
{
	string s1 = "hello world";
	string s2 = "wor";

	int i = s1.find("1232", 0);
	std::cout << "i : " << i << std::endl;
}