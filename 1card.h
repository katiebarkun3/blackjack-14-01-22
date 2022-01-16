#pragma once
#include <iostream>
class Card {
public:
	enum CardRank {
		TWO, THREE, FOUR, FIVE, SIX,
		SEVEN, EIGHT, NINE, TEN,
		JACK, QUEEN, KING, ACE, MAX_RANK
	};
	enum CardSuit {
		CLUBS,// крести
		DIAMONDS,// бубны
		HEARTS,// червы
		SPADES,// пики
		MAX_SUIT
	};
	Card(CardRank rank, CardSuit suit) :m_rank{ rank }, m_suit{ suit }
	{}
	CardRank getRank() { return m_rank; }
	int getScore() {
		if (m_rank == TWO) return 2;
		else if (m_rank == THREE)  return 3;
		else if (m_rank == FOUR)   return 4;
		else if (m_rank == FIVE)   return 5;
		else if (m_rank == SIX)    return 6;
		else if (m_rank == SEVEN)  return 7;
		else if (m_rank == EIGHT)  return 8;
		else if (m_rank == NINE)   return 9;
		else if (m_rank == TEN)    return 10;
		else if (m_rank == JACK)   return 10;
		else if (m_rank == QUEEN)  return 10;
		else if (m_rank == KING)   return 10;
		else if (m_rank == ACE)    return 1;
		else                       return 0;
	}
	void printCard() {
		if (m_rank == TWO) std::cout << '2';
		else if (m_rank == THREE)  std::cout << '3';
		else if (m_rank == FOUR)   std::cout << '4';
		else if (m_rank == FIVE)   std::cout << '5';
		else if (m_rank == SIX)    std::cout << '6';
		else if (m_rank == SEVEN)  std::cout << '7';
		else if (m_rank == EIGHT)  std::cout << '8';
		else if (m_rank == NINE)   std::cout << '9';
		else if (m_rank == TEN)    std::cout << '10';
		else if (m_rank == JACK)   std::cout << 'J';
		else if (m_rank == QUEEN)  std::cout << 'Q';
		else if (m_rank == KING)   std::cout << 'K';
		else if (m_rank == ACE)    std::cout << 'A';
		else                       std::cout << '0';

		if (m_suit == CLUBS) std::cout << 'C' << ' ';
		else if (m_suit == DIAMONDS) std::cout << 'D' << ' ';
		else if (m_suit == HEARTS) std::cout << 'H' << ' ';
		else if (m_suit == SPADES) std::cout << 'S' << ' ';
	}


private:
	CardRank m_rank;
	CardSuit m_suit;





};
