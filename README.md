# SolitairePrime ♠️ ♥️ ♣️ ♦️
SolitairePrime Card game coded in C++

## 🎴 Welcome to Solitaire Prime! This game uses one standard deck of cards. Here are the rules: 🎴

1)	Take the top card from the deck and place it face up on the table.
2)	The Sum is now the value of that card (Ace = 1, 2 = 2, … 10 = 10, Jack = 10, Queen = 10, King = 10)
3)	If the Sum is a prime number, discard that pile (hand), and start over at instruction #1
4)	If the Sum is not prime, take the next card from the top of the deck and place it on top of the card stack (pile or hand) on the table.
5)	The Sum is now the sum of all cards in the stack on the table.
6)	Go to instruction #3.

- Continue to play the game, keeping track of how many piles you have created that are prime.
- If the last card from the deck gives you a prime pile, then you win! Write the word “Winner” on the screen and show how many prime piles there were.
- If the last card from the deck does not give you a prime pile, then you lose. Write the word “Loser” on the screen.
- These 2 screen shots show possible winner and loser hands. When you acquire a Prime pile, print out the value (prime number) and start over on the next line.

## 🎴 In the main function, you will have a menu that looks like this: 🎴

Welcome to Solitaire Prime!
1)	New Deck
2)	Display Deck
3)	Shuffle Deck
4)	Play Solitaire Prime
5)	Exit

## 🎴 Running the Program 🎴
- Download the zip file and open in an IDE compatible of compiling C++ (I use Visual Studio Community 2022 in this case)
- Run the app and follow the menu instructions on the console
