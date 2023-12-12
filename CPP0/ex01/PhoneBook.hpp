#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook{
	
	private:
		Contact contacts[8];
		int size;
	public:
		PhoneBook();
		~PhoneBook();
		void show_infos(int i);
		int get_size();
		void inc_size();
		void create_contact();
		void show_all_infos();
};


#endif
