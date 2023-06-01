#include <string>
#ifndef Card_h 
#define Card_h
using namespace std;

class Card
{
public:
    Card(); // create blank card
    Card(char r, char s); // constructor to create a card, with rank and suit
    void setCard(char r, char s); // set value to existing blank card
    int getValue(); // return the point value of the card (ace=1, face=10)
    void showCard(); // display card - Ace of Spades would be AS

private:
    char rank;
    char suit;
};
#endif