#include "pch.h"
#include "Deck.h"


Deck::Deck()
{
}


Deck::~Deck()
{
}

void Deck::AddCard(Card card, position)
{
	switch (position)
	{
	case Deck::TOP:
		deckVector.insert(deckVector.begin(), card);
		break;
	case Deck::BOTTOM:
		deckVector.insert(deckVector.end(), card);
		break;
	case Deck::RANDOM:
		deckVector.insert(deckVector.begin(), card);
		break;
	default:
		break;
	}
}
``!
bool Deck::IsCardInDeck(Card card)
{
	bool sameRank = false;
	bool sameSuit = false;

	for (auto & searchedCard : deckVector) {
		if (searchedCard.get_rank == card.get_rank) {
			sameRank = true;
		}

		if (searchedCard.get_suit == card.get_suit) {
			sameSuit = true;
		}
	}
}

void Deck::PopulateStandardDeck()
{
	for (int i = 1; i < 52; i++) {

	}
}

void Deck::ShuffleDeck()
{
}

Card Deck::GetCard(position, bool isTake)
{
	return Card();
}
