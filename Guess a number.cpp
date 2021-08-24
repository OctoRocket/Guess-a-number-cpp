#include <iostream>
using namespace std;

int main()
{
	cout << "This is a game where you try to guess a number.The computer will pick a number then you will guess!If your number is too high or too low, the computer will tell you. Get ready to play!\n";
	srand(time(NULL));
	int number = rand() % 1000 + 1;
	int turn_number = 1;
	int guess;
	while (true) {
		cout << "Turn: " << turn_number << ". " << "What is your guess ? \n";
		cin >> guess;
		if (guess > number) {
			cout << "Your number is too big.\n";
		}
		else if (guess < number) {
			cout << "Your number is too small.\n";
		}
		else if (guess == number) {
			cout << "You won! The number was " << number << " and it took " << turn_number << " turns to get to this answer! (Press enter to continue)";
			cin.ignore();
			cin.ignore();
			return 0;
		}
		turn_number++;
	}
}
