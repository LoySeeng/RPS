#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int Rock = 1;
const int Paper = 2;
const int Scissor = 3;

int GetRandomNumber() {
	
	srand(time(NULL));

	int num = 1 + rand() % 3;

	return num;
}

string displayAnsw(int choice) {
	string Answer;
	
	if (choice == Rock) {
		Answer = "Rock";
	}
	else if (choice == Paper) {
		Answer = "Paper";
	}
	else if (choice == Scissor) {
		Answer = "Scissor";
	}

	return Answer;
}


int main() {

	cout << "\nWelcome to Rock Paper Scissor game~\n" << endl;
	
	int UsNum = 0;
	
	int Round = 1;
	int Wins = 0;
	int Tie = 0;
	int Loses = 0;

	while (UsNum != 4) {
		cout << "\n\n\t Round " << Round << endl;
		cout << "\nChoose: 1 - Rock, 2 - Paper, 3 - Scissor, 4 - Exet \n" << endl;
		cin >> UsNum;
		if (UsNum < 1 || UsNum > 4) {
			cout << "Choose only numbers between 1 and 4!" << endl;
			continue;
		}
		if (UsNum == 4) {
			cout << "\nToday score: " << Wins << " wins, " << Tie << " ties, and " << Loses << " loses." << endl;
			cout << "\nGoodbye, Human!" << endl;
			continue;
		}
		cout << "\nYour choice: ";
		cout << displayAnsw(UsNum) << endl;
		cout << "\nComputer choice: ";
		int ComNum = GetRandomNumber();
		cout << displayAnsw(ComNum) << endl;

		if ((UsNum == Rock && ComNum == Rock) || (UsNum == Paper && ComNum == Paper) || (UsNum == Scissor && ComNum == Scissor)) {
			cout << "\n\nTie" << endl;
			Tie++;
		}
		else if ((UsNum == Rock && ComNum == Paper) || (UsNum == Paper && ComNum == Scissor) || (UsNum == Scissor && ComNum == Rock)) {
			cout << "\n\nDamn machines have won again" << endl;
			Loses++;
		}
		else {
			cout << "\n\nCongrats! You've won!" << endl;
			Wins++;
		}
		Round++;
	}

	return 0;
}



/*  ravesli.com - P1 #2
	'Rock Paper Scissor'
*/ 
