#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook(void)
{
	this->size = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "See you" << std::endl;
}


int PhoneBook::get_size()
{
	return this->size;
}

void PhoneBook::inc_size()
{
	this->size++;
}

void PhoneBook::create_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	
	while (first_name.size() == 0)
	{
		std::cout << "What is your name!!" << std::endl;
		std::getline(std::cin, first_name);
	}
	while (last_name.size() == 0)
	{
		std::cout << "What is your last name!!" << std::endl;
		std::getline(std::cin, last_name);
	}
	
	while (nickname.size() == 0)
	{
		std::cout << "What is your nick name!!" << std::endl;
		std::getline(std::cin, nickname);
	}
	
	while (phone_number.size() == 0)
	{
		std::cout << "What is your phone number!!" << std::endl;
		std::getline(std::cin, phone_number);
	}
	
	while (darkest_secret.size() == 0)
	{
		std::cout << "What is your darkest secret!!" << std::endl;
		std::getline(std::cin, darkest_secret);
	}
	


	int i = get_size();
	if (i < 8)
	{
		this->contacts[i].set_first_name(first_name);
		this->contacts[i].set_last_name(last_name);
		this->contacts[i].set_nickname(nickname);
		this->contacts[i].set_phone_number(phone_number);
		this->contacts[i].set_darkest_secret(darkest_secret);
	}
	else
	{
		int j = i % 8;
		this->contacts[j].set_first_name(first_name);
		this->contacts[j].set_last_name(last_name);
		this->contacts[j].set_nickname(nickname);
		this->contacts[j].set_phone_number(phone_number);
		this->contacts[j].set_darkest_secret(darkest_secret);
	}
}

void PhoneBook::show_all_infos()
{
	std::cout << std::endl << "     index|      name|   surname|  nickname|";
	std::cout << std::endl << "--------------------------------------------" << std::endl;
	for (int i = 0; i < (this->get_size() > 8 ? 8 : this->get_size()); i++)
	{
		std::cout << "         " << i + 1 << "|";
		for (int space = 0; space < (int)(10 - this->contacts[i].get_first_name().length()); space++)
			std::cout << " ";
		if(this->contacts[i].get_first_name().length() > 10)
			std::cout << this->contacts[i].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << this->contacts[i].get_first_name() << "|";

		for (int space = 0; space < (int)(10 - this->contacts[i].get_last_name().length()); space++)
			std::cout << " ";
		if(this->contacts[i].get_last_name().length() > 10)
			std::cout << this->contacts[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << this->contacts[i].get_last_name() << "|";

		for (int space = 0; space < (int)(10 - this->contacts[i].get_nickname().length()); space++)
			std::cout << " ";
		if(this->contacts[i].get_nickname().length() > 10)
			std::cout << this->contacts[i].get_nickname().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << this->contacts[i].get_nickname() << "|" << std::endl;
	}
	
}

void PhoneBook::show_infos(int j)
{
	int i = j - 1;
	std::cout << "First name : " << this->contacts[i].get_first_name() << std::endl;
	std::cout << "Last name : " << this->contacts[i].get_last_name() << std::endl;
	std::cout << "Nickname : " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Phone number : " << this->contacts[i].get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << this->contacts[i].get_darkest_secret() << std::endl;
}