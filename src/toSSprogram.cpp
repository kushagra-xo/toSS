#include"../headers/input.hpp"
#include"../headers/result.hpp"
#include"../headers/debug.hpp"

int main()
{
	entered("main");

	instructions();
	int userChoice {inputFromUser("your choice")};
	int faceOfCoin {randomNumPls()};
	result(faceOfCoin,userChoice);

	exited("main");	
	return 0;
}
