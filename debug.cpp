#include<iostream>
#include<string>

void entered(std::string function)
{
	#ifdef DEBUG
	std::cout << "Entered " << function << "();\n" ;
	#endif
}

void exited(std::string function)
{
	#ifdef DEBUG
	std::cout << "Exited " << function << "();\n" ;
	#endif
}
