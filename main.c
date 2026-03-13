#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);

int main() {
	const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	const char *face[13] = {"Ace", "Deus", "Three", "Four", "Five", "Six", "Seven",
									"Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	int deck[4][13] = {0};

	srand(time(0));

	

	return 0;
}

void shuffle(int wDeck[][13]) {
	int row;
	int column;
	int card;

	for (card = 1; card <= 52; card++) {
		do {
			row = rand() % 4;
			column = rand() % 13;
		} while (wDeck[row][column] != 0);

		wDeck[row][column] = card;
	}
}

