
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{


	std::string command;
	int a;
	PhoneBook *my_book = new PhoneBook();
	std::cout << "My Awesome Phonebook" << std::endl;
	std::cout << "You can only  enter one command " << std::endl;
	std::cout << "Commands are ADD, SEARCH and EXIT " << std::endl;
	while(1)
	{
		std::cout << "What is your command!!" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			my_book->create_contact();
			my_book->inc_size();	
		}
		else if (command == "SEARCH")
		{
			my_book->show_all_infos();
			std::string index;
			std::cout << "Enter the index :: ";
			std::getline(std::cin, index);
			if (index.length() > 1 || !isdigit(index[0]))
				std::cout << "Wrong index 1!" << std::endl;
			else if (!(0 < atoi(index.c_str()) && atoi(index.c_str()) <= my_book->get_size()) || atoi(index.c_str()) > 8 )
				std::cout << "Wrong index 2!" << std::endl;
			else
			{
				a = atoi(index.c_str());
				my_book->show_infos(a);
			}
		}
		else if (command == "EXIT")
		{
			my_book->~PhoneBook();
			exit(0);
		}
		else
		{
			std::cout << "You can only  enter one command " << std::endl;
			std::cout << "Commands are ADD, SEARCH and EXİT " << std::endl;
		}
	}
}