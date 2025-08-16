#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;

	score = 100;
	distance = 200.12;
	playAgain = 'y';
	shieldsUp = true;
	lives = 2;
	aliensKilled = 20;

	double engineTemp = 50.25;

	cout << "Score: " << score << endl;
	cout << "Distance: " << distance << endl;
	cout << "Play Again? " << playAgain << endl;
	cout << "lives: " << lives << endl;
	cout << "Alien Killed: " << aliensKilled << endl;
	cout << "Engine Temp: " << engineTemp << endl;

	int fuel;
	cout << "How much fuel?" << endl;
	cin >> fuel;
	cout << "Fuel: " << fuel << endl;

	typedef unsigned int ushort;
	ushort bonus = 10;
	cout << "\nBonus: " << bonus << endl;

	return 0;
}