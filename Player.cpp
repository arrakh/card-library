#include "Player.h"

Player::Player()
{
}

Player::Player(string name) {
	playerName = name;
	currentBalance;
	startingBalance = 0;
}

string Player::getPlayerName() {
	return playerName;

}

int Player::getBalance() {
	return currentBalance;
}

void Player::setPlayerName(string name) {
	playerName = name;
}

void Player::setBalance(int balance) {
	currentBalance = balance;
}