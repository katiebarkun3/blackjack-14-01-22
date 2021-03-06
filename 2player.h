#pragma once
#include "2hand.h"
#include "2deckcard.h"

class Player : public Hand {
public:
	Player() :Hand() {}
	void play(Deck& deck) {
		char choice;
		do {
			addCard(deck.pop());
			printHand();
			getTotal();
			std::cout << getScore() << std::endl;
			if (getScore() > 21) {
				std::cout << "You lose! :(" << std::endl;
				//std::cout << std::endl;
				return;
			}
			std::cout << "Another card?:) (y/n) ";
			std::cin >> choice;

		} while (choice == 'y' || choice == 'Y');
	}

};