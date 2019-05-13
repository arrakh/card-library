#pragma once
#include <iostream>
using namespace std;

class Player
{
public:
	Player(string name);
	Player();

	void setPlayerName(string name);
	string getPlayerName();
	void setBalance(int balance);
	int getBalance();
private:
	string playerName;
	int currentBalance;
	int startingBalance = 0;
};

