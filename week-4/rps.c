#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
#define WIN printf("\nYou win!\n")
#define LOSE printf("\nYou lose!\n")
#define TIE printf("\nYou a tie!\n")

void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void) {
	int user_choice, comp_choice;

	srand(time(0));
	printf("Welcome to RPS~\n");
	printf("Choose your move:\n");
	printf("1-Rock, 2-Paper, 3-Scissors\n");
	printf("Cjoice:>>>");

	scanf_s("%d", &user_choice);

	comp_choice = rand() % 3 + 1;

	printf("\nYou chose: %d\n",user_choice);
	printf("Computer chose: %d\n", comp_choice);
	play_game(user_choice, comp_choice);
	return 0;
}

void play_game(int user_choice, int comp_choice) {
	if (user_choice == comp_choice) TIE;
	else if(user_choice == ROCK && comp_choice == SCISSORS) WIN;
	else if(user_choice == PAPER && comp_choice == ROCK) WIN;
	else if(user_choice == SCISSORS && comp_choice == PAPER) WIN;
	else LOSE;
}
void print_choice(int choice) {
	if (choice == ROCK) {
		printf("Rock\n");
	}
	else if (choice == PAPER) {
		printf("Paper\n");
	}
	else if (choice == SCISSORS) {
		printf("Scissors\n");
	}
	else
	{
		printf("Error:incorrect choice!\n");
	}
}