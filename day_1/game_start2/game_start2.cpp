// game-start2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	unsigned int score = 1000;
	cout << score << endl;

	int lives = 3;
	int bonus = 10;
	cout << ++lives * bonus << endl;

	lives = 3;
	bonus = 10;
	cout << lives++ * bonus << endl;
	cout << lives++ << endl;
	cout << lives << endl;

	score = 4294967295;
	cout << "\nScore: " << score << endl;
	++score;
	cout << score;

	return 0;
}