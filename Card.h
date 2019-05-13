#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "pch.h"

using namespace std;

class Card {
private:
	int rank;
	int suit;
	int card[7][9] = {
			{ 1, 5, 5, 5, 5, 5, 5, 5, 1 },
			{ 1, 3, 0, 0, 0, 0, 0, 0, 1 } ,
			{ 1, 0, 0, 0, 0, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 4, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 0, 0, 0, 0, 1 },
			{ 1, 0, 0, 0, 0, 0, 0, 3, 1 },
			{ 1, 2, 2, 2, 2, 2, 2, 2, 1 },


	};

public:
	void Draw();
	Card();
	int RandomCard(int);

	int get_rank();

	string get_rank_string();

	int get_suit();

	string get_suit_string();
};