#include<iostream>
#include"headers/input.hpp"
#include"headers/result.hpp"
#include"headers/debug.hpp"

int main()
{

	entered("main");
	instructions();

	std::cout << "  Enter your choice: " ;
	int userChoice {input()};
	int faceOfCoin {randomNumPls()};

	result(faceOfCoin,userChoice);

		#ifdef DEBUG
			std::cout << "  main() ended;\n\n" ;
		#endif
	
	return 0;
}
