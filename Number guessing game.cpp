#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	cout << "\n\t\t\tWelcome to Number Guessing game!"
		<< endl;
	cout << "Guess a number between 1 and 100. "
			"Choose the level and play."
		<< endl;

	while (true) {
		cout << "\nEnter the difficulty level: \n";
		cout << "1 for easy!\t";
		cout << "2 for medium!\t";
		cout << "3 for difficult!\t";
		cout << "0 for ending the game!\n" << endl;

		// selection of level of difficulty
		int difficultyChoice;
		cout << "Enter the number: ";
		cin >> difficultyChoice;

		// generating the number
		srand(time(0));
		int Number = 1 + (rand() % 100);
		int playerChoice;

		// Difficulty Level:Easy
		if (difficultyChoice == 1) {
			cout << "\nYou have 10 choices for finding the "
					"number between 1 and 100.";
			int choicesLeft = 10;
			for (int i = 1; i <= 10; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determine if the playerChoice matches
				// the number
				if (playerChoice == Number) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the number" << endl;
					cout << "\t\t\t Thank you for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > Number) {
						cout << "The number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"number, it was "
							<<Number
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}

		// Difficulty level : Medium
		else if (difficultyChoice == 2) {
			cout << "\nYou have 7 choices for finding the "
					"number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {

				// prompting the player to guess the number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determine if the playerChoice matches the number
				if (playerChoice == Number) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the number" << endl;
					cout << "\t\t\t Thank you for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > Number) {
						cout << "The number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< Number
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// Difficulty level : Medium
		else if (difficultyChoice == 3) {
			cout << "\nYou have 5 choices for finding the "
					"number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {

				// prompting the player to guess the number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determining if the playerChoice matches number
				if (playerChoice == Number) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the number" << endl;
					cout << "\t\t\t Thank you for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > Number) {
						cout << "The number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"number, it was "
							<< Number
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// To end the game
		else if (difficultyChoice == 0) {
			exit(0);
		}
		else {
			cout << "Wrong choice, Enter valid choice to "
					"play the game! (0,1,2,3)"
				<< endl;
		}
	}
	return 0;
}
