#include <iostream>
#include <string>
#include "Deck.h"
#include "Card.h"
using namespace std;

Deck::Deck()
{
    // dont need to initialize decl[52] here bc its in header file and knows that 52 cards in deck
    // array for the rank of the card, numbers should also be in ' ' to not mix up int with char values
    char rank[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };
    // array for the card suite, in order of spades, hearts, diamonds, clubs
    char suit[4] = { 'S', 'H', 'D', 'C' };
    
    int scount = 0; // tracker for suit
    int rcount = 0; // tracker for rank
    for (int i = 0; i < 52; i++) // iterates through 52 card deck
    {
        deck[i].setCard(rank[rcount], suit[scount]);
        rcount++; // next index for rank
        // after iterating through all ranks, start over and move on to next suit
        if (rcount == 13)
        {
            rcount = 0;
            scount ++;
        }
    }
}

void Deck::refreshDeck() // should be the same as initializing it so paste it again
{
    char rank[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };
    char suit[4] = { 'S', 'H', 'D', 'C' };

    int scount = 0;
    int rcount = 0;
    for (int i = 0; i < 52; i++)
    {
        deck[i].setCard(rank[rcount], suit[scount]);
        rcount++;

        if (rcount == 13)
        {
            rcount = 0;
            scount++;
        }
    }
    cardtop = 0; // reset amount of cards left
}

Card Deck::deal() // cardtop++ increments the cards
{
    return deck[cardtop++]; 
}

void Deck::shuffle()
{
    srand(time(NULL)); // ensures random values are different each time
    for (int i = 0; i < 628; i++) // swap two indexes multiple times to shuffle
    {
        int x = rand() % 52; // random index in deck
        int y = rand() % 52; // another random index

        Card z = deck[x];
        deck[x] = deck[y];
        deck[y] = z;
    }
}

int Deck::cardsLeft() // amount of cards left in deck
{
    int cardsleft = 52 - cardtop;
    return cardsleft;
}

void Deck::showDeck() // display in 13 columns and 4 rows
{
    int count = 0;
    for (int i = 0; i < 52; i++)
    {
        deck[i].showCard(); // displays card
        cout << ", ";
        count++;

        if (count == 13) // once row reaches 13 values, go to next row
        {
            cout << endl;
            count = 0; // reset
        }
    }
}
