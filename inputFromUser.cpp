#include<iostream>
#include"headers/debug.hpp"

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

		#ifdef DEBUG
			std::cout << "  Exited instructions();\n";
		#endif
}

int input()
{
		#ifdef DEBUG
			std::cout << "\n  Entered inputFromUser();\n";
		#endif


	int value{};
	std::cin >> value ;

		#ifdef DEBUG
			std::cout << "  Value from user:" << value << "\n" ;
			std::cout << "\n  Exited inputFromUser();";
		#endif
	
	std::cout << "\n" ;
	return value;		
}
