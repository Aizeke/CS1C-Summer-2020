// Deck.h

#pragma once

class Deck {
    public:
        Deck();
        ~Deck();
        
        void shuffle();
        bool operator == ( const Deck& toCompare);
        void print();
    private:
        enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };
        enum rank { ACE, KING, QUEEN, JACK, TEN, NINE, EIGHT, SEVEN, SIX, FIVE, FOUR, THREE, TWO };



};