#ifndef CLASS01_H
#define CLASS01_H
#include <iostream>


class Player{
	private:
		int id;
		std::string name;
			
	public:
		int  *ip;	
		int& ref;
		Player(int id, std::string name, int& ref, int *ip)  : ref(ref)
 		{
			this->name = name;
			this->id = id;
			this->ip = new int(6);
		}
		Player(const Player& P) : ref(P.ref)
		{
			this->name = P.name;
			this->id = P.id;
			this->ip = new int(*P.ip);
		}
		~Player()
		{
			delete ip;
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
