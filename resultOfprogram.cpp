#include<iostream>
#include<cstdlib>
#include<time.h>
#include"headers/debug.hpp"

int randomNumPls()
{
	entered("randomNumPls");

	srand (time(0));	
	short num { static_cast<short>(rand() % 2) };

		#ifdef DEBUG
			std::cout << "  Random Number:" << num << "\n" ;
		#endif
	exited("randomNumPls");
	return num;
}

void faceOfCoinInWords(int num)
{

	entered("faceOfCoinInWords");

	if (num == 0) {
		std::cout << "  It was Heads\n";	
	}

	else
	{
		std::cout << "  It was Tails\n";	
	}

	exited("faceOfCoinInWords");

}

void result(int faceOfCoin , int userChoice)
{

	entered("result");
	std::cout << "\n" ;

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


	std::cout << "\n" ;
	std::cout << "\n" ;

	exited("result");

}
