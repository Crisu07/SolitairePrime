#include "Card.h"

class Deck
{

private:
    Card deck[52]; // array for the deck
    int cardtop = 0; // counter to keep track of the top card, 0 is first index

public:
    Deck(); // constructor which creates 52 card deck (S, H, D, C suit order)
    void refreshDeck(); // reset the deck to look like new deck
    Card deal(); // deal a card from the top 
    void shuffle(); // shuffle deck
    int cardsLeft(); // return amount of cards left in deck
    void showDeck(); // display results in 13 columns and 4 rows
};