#include <iostream>
#include <string>
#include "FBullCowGame.h"
using namespace std;

void printIntro(int wordlength);
void playGame();
string getGuess();
void printGuess(string guess);
bool askToPlayAgain();

const int NUMBER_OF_GUESSES = 5;


// The entry point for the Game
int main(int argc, char* argv[]) {
	do {
		printIntro(9);
		playGame();
	} while (askToPlayAgain());
	
	return 0;

}

void printIntro(int wordlength) {
	cout << "Welcome to Bulls and Cows, a fun word game\n";
	cout << "Can you guess the " << wordlength;
	cout << " letter isogram I am thinking of?\n\n";
	return;
}

void playGame() {
	// loop for the number of turns asking for guesses
    for (int i = 0; i < NUMBER_OF_GUESSES; i++) {
    	printGuess(getGuess());
	}
}

string getGuess() {
	string guess;
	cout << "Enter your guess: \n";
	getline(cin, guess);
	return guess;
}

void printGuess(string guess) {
	cout << "Your guess is : " << guess << endl;
}


bool askToPlayAgain() {
	cout << "Do you want to play again? \n [y/N]: ";
	string answer;
	getline(cin, answer);
	return answer[0] == 'y' || answer[0] == 'Y';
}
