#include <iostream>
#include <fstream>

void find_word(std::string& line, std::string old_str, std::string new_str)
{
	int pos;
	pos = line.find(old_str, 0);
	std::string new_line;

	if ( pos != -1)
	{
		new_line.append(line, 0, pos);
		new_line.append(new_str, 0, new_str.length());
		new_line.append(line, pos + old_str.length());
	}
	else
	{
		new_line.append(line);
	}
	line = new_line;
}


int main(int argc, char **argv)
{
	
	if (argc == 4)
	{
		std::ifstream fin;
		std::string file_name = argv[1];
		std::string old_str = argv[2];
		std::string new_str = argv[3];
		std::string line;
		std::ofstream fout;
	
		fin.open(file_name);
		if (fin.is_open() == false)
		{
			std::cout << "The is no file named like " << file_name << std::endl;
			return 0;
		}
		if(old_str.length() == 0  | new_str.length() == 0)
		{
			std::cout << "Bad arguments" << std::endl;
			return 0;
		}
	
		
		fout.open(file_name+ ".replace", std::ios::trunc |std::ios::out);
		while (getline(fin, line))
		{
			while(line.find(old_str, 0) !=(unsigned long)(-1))
				find_word(line, old_str, new_str);
			fout << line << std::endl;
		}
		fin.close();
		fout.close();
	}
	else
		std::cout << "Not enough arguments"<< std::endl;

}