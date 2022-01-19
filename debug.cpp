#include<iostream>
#include<string>
#include"headers/debug.hpp"

void entered(std::string function)
{
	#ifdef DEBUG
	std::cout << "  Entered " << function << "();\n" ;
	#endif
}

void exited(std::string function)
{
	#ifdef DEBUG
	std::cout << "  Exited " << function << "();\n" ;
	#endif
}
