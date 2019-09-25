#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	const int MIN_VALUE = 1, MAX_VALUE = 1000;
	int firstNumber, secondNumber, userInput, answer, score;
	char cont = 'Y';

	score = 0;

	unsigned seed = time(0);
	srand(seed);

	firstNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	secondNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	cout << "Hello young padawan that struggles in math." << endl << "My name is Pythagoras and I will be your math tutor." << endl;
	cout << "Type your answer and press enter.\n Only then will I reveal the correct answer..." << endl;

	while (cont == 'Y' || cont == 'y')
	{
		cout << "  " << firstNumber << endl;
		cout << "+ " << secondNumber << endl;
		cout << "-------" << endl;
		cin >> userInput;
		answer = firstNumber + secondNumber;
		if (userInput == answer)
		{
			cout << endl << "That is CORRECT!" << endl << "Your score is now " << ++score << endl;
			cout << "Continue? Y/N" << endl;
			cin >> cont;
			cout << endl << endl;

		}
		else if (userInput != answer)
		{
			cout << endl << "Not quite. The correct answer is " << answer << endl << "Your score is now " << --score << endl << endl;
			cout << "Continue? Y/N" << endl;
			cin >> cont;
			cout << endl << endl;
		}
		else
		{
			cout << "Invalid Entry." << endl << endl;
			cout << "Continue? Y/N" << endl;
			cin >> cont;

		}
	}
	return 0;
}
