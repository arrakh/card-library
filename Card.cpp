#include "Card.h"
#include <String>

using namespace std;
enum { SPACE = 0, WALL1 = 1, WALL2 = 2, RANK = 3, SUIT = 4, WALL3 = 5 };
void Card::Draw() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9; j++) {
			switch (card[i][j])
			{
			case SPACE: cout << " "; break;
			case WALL1: cout << char(219); break;
			case WALL2: cout << char(220); break;
			case WALL3: cout << char(223); break;
			case RANK: cout << get_rank_string() ; break;
			case SUIT: cout << get_suit_string(); break;
			default:
				break;
			}
		}
		cout << endl;
	}
}
Card::Card() {
	{
		srand(time(NULL));
		rank = (1 + RandomCard(13));
		suit = (1 + RandomCard(4));
	}
}
int Card::RandomCard(int max) {
	return (std::rand() % (int)(max));
}

int Card::get_rank()
{
	return rank;
}

string Card::get_rank_string()
{
	if (rank == 1) return "1";
	if (rank == 2) return "2";
	if (rank == 3) return "3";
	if (rank == 4) return "4";
	if (rank == 5) return "5";
	if (rank == 6) return "6";
	if (rank == 7) return "7";
	if (rank == 8) return "8";
	if (rank == 9) return "9";
	if (rank == 10) return "10";
	if (rank == 11) return "J";
	if (rank == 12) return "Q";
	if (rank == 13) return "K";
	else return "Uknown rank";
	
}

int Card::get_suit()
{
	return suit;
}

string Card::get_suit_string()
{
	if (suit == 1) return "D";
	if (suit == 2) return "H";
	if (suit == 3) return "S";
	if (suit == 4) return "C";
	else return "Unknown suit";
}







