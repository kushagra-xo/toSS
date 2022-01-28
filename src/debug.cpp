#include<iostream>
#include<string>
#include"../headers/debug.hpp"

void entered(std::string functionName)
{
	#ifdef DEBUG
	std::cout << "  Entered " << functionName << "();\n" ;
	#endif
}

void exited(std::string functionName)
{
	#ifdef DEBUG
	std::cout << "  Exited " << functionName << "();\n" ;
	#endif
}

void valueof(std::string str, int integertoOutput)
{
	#ifdef DEBUG
	std::cout << "  " << str << ": " << integertoOutput << "\n" ;
	#endif
}
