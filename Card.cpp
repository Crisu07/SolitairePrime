#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

// default constructor
Card::Card()
{
    // set to random char x to be changed later
    rank = 'x';
    suit = 'x';
}

// overload constructor
Card::Card(char r, char s)
{
    rank = r;
    suit = s;
}

// pass in own values
void Card::setCard(char r, char s) // helps with resetting the deck
{
    rank = r;
    suit = s;
}

int Card::getValue()
{
    // Determining Rank
    char r = this->rank; // References current class instance variable (use rank instead of r if delete this line)
    // any other face card will have a value of 10
    if (r == 'J' || r == 'Q' || r == 'K' || r == 'T')
    {
        return 10;
    }
    // if the suit is A then it's Value is 1
    else if (r == 'A')
    {
        return 1;
    }
    // 3 face cards and 1 ace per suit so (3+1)4 = 12 -> 52 card - 12 = 40 number cards
    else
        /*
        Convert char r to int for values 2 thru 10
        ascii -> 1 is 49, 2 is 50
        subtract 48 to get actual value -> 1 = 49 - 48
        */
    {
        int num = r - 48;
        return num;
    }
}

void Card::showCard()
{
    if (rank != 'T') 
    {
         cout << rank << suit; // return the card's rank and suit
    }
    else
    {
        cout << 10 << suit; // instead of returning T for rank 10, replace with actual number
    }
}