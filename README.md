![](img/logo.png "toSS")

![Build: Successfu;](https://img.shields.io/badge/Build-Successful%20-green.svg)
![License: GPL v2](https://img.shields.io/badge/License-GPL%20v3.0-blue.svg)

## Build Instructions

```bash
git clone https://github.com/kushagraa-j/toSS.git && cd toSS
g++ *.cpp -o toss
```

## Usage Instructions

```bash
./toss
```

## Code Structure

- inputFromUser.cpp
	- instructions() 	->     provide the user with how to use the program 
	- inputFromUser()	->     take input from user 

- resultOfProgram.cpp
	- randomNumPls() 	->     generate a random number ( 1 or 0 ) 
	- faceOfCoinInWords()   ->     tell the user if the face was heads or tails
	- result()       	->     from user input and random number 
				       determine if the user won or lost 
- toSSprogram.cpp
	- main()         	->     all the functions are executed here

- debug.cpp
	- entered() 		->     notify on entering func
	- exited() 		->     notify on exiting func

## Debug mode

To enable debug mode, edit the file `headers/debug.hpp`, change `NODEBUG` to `DEBUG`.
The file should looks like this,

```cpp
/* Debug */

#ifndef debug
#define debug

#define DEBUG

#endif
```
Compile the code again to see effect.
