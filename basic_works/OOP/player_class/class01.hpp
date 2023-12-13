#ifndef CLASS01_H
#define CLASS01_H
#include <iostream>


class Player{
	private:
		int id;
		std::string name;
		std::string last_name;
	public:
		Player(int id, std::string name)
		{
			this->name = name;
			this->id = id;
			this->last_name = "Default";
		}
		Player(int id, std::string name, std::string last_name)
		{
			this->name = name;
			this->id = id;
			this->last_name = last_name;
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
		std::string get_last_name()
		{
			return this->last_name;
		}
};


#endif
