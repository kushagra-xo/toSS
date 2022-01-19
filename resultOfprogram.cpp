#include<iostream>
#include<cstdlib>
#include<time.h>
#include"headers/debug.hpp"

int randomNumPls()
{
		#ifdef DEBUG
			std::cout << "\n  Entered randomNumPls();\n";
		#endif

	srand (time(0));	
	short num { static_cast<short>(rand() % 2) };

		#ifdef DEBUG
			std::cout << "  Random Number:" << num << "\n";
			std::cout << "  Exited randomNumPls();\n\n";
		#endif

	return num;
}

void faceOfCoinInWords(int num)
{

		#ifdef DEBUG
			std::cout << "  Entered faceOfCoinInWords();\n" ;
		#endif

	if (num == 0) {
		std::cout << "  It was Heads\n";	
	}

	else
	{
		std::cout << "  It was Tails\n";	
	}

		#ifdef DEBUG
			std::cout << "  Exited faceOfCoinInWords();\n" ;
		#endif
}

void result(int faceOfCoin , int userChoice)
{
		#ifdef DEBUG
			std::cout << "  Entered result();\n\n" ;
		#endif

	if (userChoice != 0 && userChoice != 1) 
	{
		std::cout << "  Invalid Input" ;
	}

	else
	{
		if (faceOfCoin == userChoice) 
		{
			faceOfCoinInWords(faceOfCoin);
			std::cout << "  You Won!";
		}

		else
		{
			faceOfCoinInWords(faceOfCoin);
			std::cout << "  You lost!";
		}
	}


		#ifdef DEBUG
			std::cout << "\n\n  Exited result();" ;
		#endif

	std::cout << "\n" ;
	std::cout << "\n" ;
}
