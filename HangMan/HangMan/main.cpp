#include <iostream>
#include <string>
#include <cctype>

//varibale to set word to guess against later assigned to an array i guess, also a character variable that is the players current guess
char playerGuess;
std::string word = "Temp";
// game loop boolean to check against... i.e. while its true game will run when it flips false (or the player guesses correct) the game will stop
bool gameRun = 0;
//total amount of guess, head, body, arm, arm, leg, leg
int guessLimit = 6;
//guessCount gets the current guess and pushes it to the board to update the console to new visual, pause pauses the game for testing
int guessCount, pause;
//alhapbet array to keet all letters that we have checked
char alphabet[26];



void board(int guessCount) {
	if (guessCount == 0) {
		std::cout << "    _____ " << std::endl;
		std::cout << "    |    |" << std::endl;
		std::cout << "    |     " << std::endl;
		std::cout << "    |     " << std::endl;
		std::cout << "    |     " << std::endl;
		std::cout << "----------" << std::endl;
	}
	else if (guessCount == 1) {

		std::cout << "    _____ " << std::endl;
		std::cout << "    |    |" << std::endl;
		std::cout << "    |    O" << std::endl;
		std::cout << "    |     " << std::endl;
		std::cout << "    |     " << std::endl;
		std::cout << "----------" << std::endl;
	}
	else if (guessCount == 2) {

		std::cout << "    _____ " << std::endl;
		std::cout << "    |    |" << std::endl;
		std::cout << "    |    O " << std::endl;
		std::cout << "    |    | " << std::endl;
		std::cout << "    |      " << std::endl;
		std::cout << "---------- " << std::endl;
	}
	else if (guessCount == 3) {
		std::cout << "    _____ " << std::endl;
		std::cout << "    |    |" << std::endl;
		std::cout << "    |    O " << std::endl;
		std::cout << "    |   /| " << std::endl;
		std::cout << "    |      " << std::endl;
		std::cout << "---------- " << std::endl;
	}
	else if (guessCount == 4) {
		std::cout << "    _____ " << std::endl;
		std::cout << "    |    |" << std::endl;
		std::cout << "    |    O " << std::endl;
		std::cout << "    |   /|\\ " << std::endl;
		std::cout << "    |      " << std::endl;
		std::cout << "---------- " << std::endl;
	}
	else if (guessCount == 5) {
		std::cout << "    _____ " << std::endl;
		std::cout << "    |    |" << std::endl;
		std::cout << "    |    O " << std::endl;
		std::cout << "    |   /|\\ " << std::endl;
		std::cout << "    |   /  " << std::endl;
		std::cout << "---------- " << std::endl;
	}
	else if (guessCount >= 6) {

		std::cout << "    _____ " << std::endl;
		std::cout << "    |    |" << std::endl;
		std::cout << "    |    O " << std::endl;
		std::cout << "    |   /|\\ " << std::endl;
		std::cout << "    |   / \\ " << std::endl;
		std::cout << "---------- " << std::endl;
	}
}
void conUp(std::string word) {
	for (std::string::size_type i = 0; i < word.length(); i++) {
		word[i] = tolower(word[i]);
	}
}




int main() {
	conUp(word);
	int x = 0;
	std::cout << "Welcome to Hangman!\n";
	std::cout << "Type 1 to start\n";
	std::cin >> gameRun;
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	while (gameRun == true) {

		std::cout << "Please enter your letter guess";
		std::cin >> playerGuess;
		playerGuess = alphabet[x];
		x++;






		//guessed correct or out of guesses closes game loop
		if (guessCount >= 6) {
			gameRun = false;
		}
	}
}