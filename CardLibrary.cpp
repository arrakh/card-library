// CardLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Card.h"
#include "Player.h"
#include <string>


using namespace std;

/*int main() {
	int dealer_rank;
	int player_rank;
	float bet;
	char choice;
	Card card;
	Player player = Player();

	cout << "Player, what is your name? ";
	cin >> player.name;

	cout << "How much money would you like to start with? ";
	cin >> player.starting_balance;

	player.balance = player.starting_balance;

	while (player.balance > 0 && (player.balance < player.starting_balance * 5)) {
		cout << player.name << ", you have $"
			<< player.balance << ". ";

		while (bet == 0 || bet > player.balance) {
			cout << "How much money do you want to bet? ";
			cin >> bet;

			if (bet > player.balance) {
				cout << "Sorry, you don't have enough money to make that bet.\n";
			}
		}

		card = Card();
		dealer_rank = card.get_rank();

		cout << "You draw a " << card.get_rank_string()
			<< " of " << card.get_suit_string() << ".\n";
		cout << "Will the next card be higher or lower? "
			<< "Enter \"h\" for higher or \"l\" for lower: ";
		cin >> choice;

		card = Card();
		player_rank = card.get_rank();

		cout << "You draw a " << card.get_rank_string()
			<< " of " << card.get_suit_string() << ".\n";

		if ((choice == 'h' && dealer_rank > player_rank) ||
			(choice == 'l' && dealer_rank < player_rank)) {
			player.balance -= bet;

			cout << "LOSE!!! Too bad " + player.name
				<< ". You lose $" << bet << ".\n";
		}
		else {
			player.balance += bet;

			cout << "WIN!!! Congratulations " + player.name
				<< ". You win $" << bet << "!\n";
		}

		bet = 0;
	}

	if (player.balance <= 0) {
		cout << "Too bad " + player.name << ". "
			<< "You are out of money! You lose.\n";
	}
	else {
		cout << "You win the game " + player.name << "!";
	}

	return 0;
}*/
int main() {
	Card card;
	card.Draw();
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
