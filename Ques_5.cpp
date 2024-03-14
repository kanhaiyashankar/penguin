// Write a C++ program to create a string where 'if' is added to the front of a given string. 
// If the string already begins with 'if', return the string unchanged.

#include <iostream>
#include <string>

std::string add_string(const std::string& s)
{
	if(s.substr(0,2) == "if")
	{
		return s;
	}
	else
	{
		return "if " + s;
	}
}
int main()
{
	std::string s;

	std::cout << "Enter a string " << std::endl;
	std::getline(std::cin, s);
	std::cout << add_string(s);

	return 0;
}