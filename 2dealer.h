#pragma once
#include "2hand.h"
#include "2deckcard.h"

class Dealer : public Hand {
public:
	Dealer() : Hand() {}
	void play(Deck& deck) {

		do {
			addCard(deck.pop());
			printHand();
			getTotal();
			std::cout << m_score << std::endl;
			if (m_score > 21) {
				std::cout << "Dealer lose! ;)" << std::endl;
				return;
			}

		} while (m_score < 17);
	}
};