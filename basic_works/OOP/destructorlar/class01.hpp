#ifndef CLASS01_H
#define CLASS01_H
#include <iostream>


class Player{
	private:
		int id;
		std::string name;
	public:
		Player(int id, std::string name)
		{
			this->name = name;
			this->id = id;
			std::cout << "Constructor called" << std::endl;
		}
		~Player()
		{
			std::cout << "Destructor called" << std::endl;
		}
		void set_id(int id)
		{
			this->id = id;
		}
		int get_id()
		{
			return this->id;
		}
		std::string get_name()
		{
			return this->name;
		}

};


#endif
