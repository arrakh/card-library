#pragma once
#include <stdlib.h>
#include <vector>
#include "Card.h"
class Deck
{
public:
	Deck();
	~Deck();
	vector<Card> deckVector;
	enum position{TOP, BOTTOM, RANDOM};

	void AddCard(Card card, position);
	bool IsCardInDeck(Card card);
	void PopulateStandardDeck();
	void ShuffleDeck();
	Card GetCard(position, bool isTake);
	

	
}