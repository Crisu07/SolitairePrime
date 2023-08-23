#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
using namespace std;

int answer; // user input
int piles = 0; // tracker for number of piles while playing
int sum = 0; // sum of card values

// Menu Options
void display()
{
    cout << "1) New Deck" << endl;
    cout << "2) Display Deck" << endl;
    cout << "3) Shuffle Deck" << endl;
    cout << "4) Play Solitaire Prime" << endl;
    cout << "5) Exit" << endl;
}

// Prime Checker
bool isPrime(int s)
{
    if (s == 1) // 1 is not a prime number, skip
    {
        return false; 
    }

    for (int i = 2; i < s; i++)
    {
        if ((s % i) == 0) // not prime
        {
            return false;
        }
    }
    return true; // yes prime
}

int main() // add loop for menu until user inputs a 5 to quit
{
    cout << "Welcome to Solitaire Prime!" << endl;
    display();
    cin >> answer;
    Deck play;

    while (answer != 5) // if user inputs 5, quit the game
    {
        if (answer == 1) // refreshes deck to a brand new one
        {
            play.refreshDeck();
            display();
            cin >> answer;
        }
        else if (answer == 2) // display deck
        {
            play.showDeck();
            display();
            cin >> answer;
        }
        else if (answer == 3) // shuffle deck
        {
            play.shuffle();
            display();
            cin >> answer;
        }
        else if (answer == 4) // play solitaire prime
        {
            cout << "Now playing Solitaire Prime!" << endl;
            int leftover = play.cardsLeft();
            while (leftover > 0) // while there are still cards in the deck
            {
                Card topcard = play.deal(); // take top card
                leftover = play.cardsLeft(); // update leftover cards
                topcard.showCard(); // show card in hand
                sum += topcard.getValue(); // add value to sum

                bool check = isPrime(sum);
                if (check) // if the sum is prime
                {
                    cout << ", Prime: " << sum << endl;
                    sum = 0; // reset the sum
                    piles++;
                }
                else // if the sum is not prime
                {
                    cout << ", "; // separates cards in hand and repeat deal stuff at top
                }
            }

            // losing case
            bool check2 = isPrime(sum);
            if (check2) // if final sum is prime, you win
            {
                cout << "Congratulations! Winner in " << piles << " piles!" << endl;
            }
            else
            {
                cout << "Oh no! You lost!" << endl;
            }

            piles = 0; // reset amount of piles
            display();
            cin >> answer;
        }
    }
}
