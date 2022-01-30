#include<iostream>

void entered(std::string functinoName)
{
	#ifdef DEBUG
	std::cout << "  Entered " << functinoName << "();\n" ;
	#endif
}

void exited(std::string functinoName)
{
	#ifdef DEBUG
	std::cout << "  Exited " << functinoName << "();\n" ;
	#endif
}

void valueof(std::string str, int integertoOutput)
{
	#ifdef DEBUG
	std::cout << "  " << str << ":" << integertoOutput << "\n" ;
	#endif
}
