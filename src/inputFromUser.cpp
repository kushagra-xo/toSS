#include<iostream>
#include<string>
#include"../headers/debug.hpp"

void instructions()
{
	entered("instructions");
	std::cout << "\n"
		     "  This program provides you with a functionality of doing a toss digitally"
		     "\n"
		     "\n"
		     "  To choose Heads: 0"
		     "\n"
		     "  To choose Tails: 1"
		     "\n" 
		     "\n" ;
	exited("intructions");
}

int inputFromUser(std::string str)
{
	entered("inputFromUser");

	int value {};
	std::cout << "  Enter " << str << ": " ;
	std::cin >> value ;

	valueof("Value from user",value);

	exited("inputFromUser");
	return value;		
}
