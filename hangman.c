#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printWord(char word[], int wordLength, int correctGuesses[]) {
	int i;
    for (i = 0; i < wordLength; i++) {
        if (correctGuesses[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int checkGuess(char word[], char guess, int correctGuesses[], int wordLength) {
    int i,correct = 0;
    for (i = 0; i < wordLength; i++) {
        if (word[i] == guess && !correctGuesses[i]) {
            correctGuesses[i] = 1;
            correct = 1;
        }
    }
    return correct;
}

int checkWin(int correctGuesses[], int wordLength) {
	int i;
    for (i = 0; i < wordLength; i++) {
        if (!correctGuesses[i])
            return 0;
    }
    return 1;
}

void printDeadman(int t){
	if(t==0)
	printf("   +---+\n   |   |\n   |   \n   |\n   |\n   |\n=========\n");
	if(t==1)
	printf("   +---+\n   |   |\n   |   0\n   |\n   |\n   |\n=========\n");
	if(t==2)
	printf("   +---+\n   |   |\n   |   0\n   |   |\n   |\n   |\n=========\n");
	if(t==3)
	printf("   +---+\n   |   |\n   |   0\n   |  /|\n   |\n   |\n=========\n");
	if(t==4)
	printf("   +---+\n   |   |\n   |   0\n   |  /|\\\n   |\n   |\n=========\n");
	if(t==5)
	printf("   +---+\n   |   |\n   |   0\n   |  /|\\\n   |  / \n   |\n=========\n");
	if(t==6){
	printf("YOU GOT HANGED\n");
	printf("   +---+\n   |   |\n   |   *\n   |  /|\\\n   |  / \\\n   |\n=========\n");
	}
}

int main() {
    char word[] = "tracecart";
    int wordLength = strlen(word);
    int correctGuesses[wordLength];
    memset(correctGuesses, 0, sizeof(correctGuesses));

    int maxTries = 6, tries = 0;
    char guess;

    printf("Welcome to Hangman!!!\n\n");

    while (tries < maxTries) {
    	
    	printDeadman(tries);
    	
        printWord(word, wordLength, correctGuesses);
		printf("\n");
        printf("Enter your guess (single letter): ");
        scanf(" %c", &guess);

        if (!checkGuess(word, guess, correctGuesses, wordLength)) {
            tries++;
            printf("\nWrong guess! Tries remaining: %d\n", maxTries - tries);
        } else {
            printf("\nGood guess!\n");
        }

        if (checkWin(correctGuesses, wordLength)) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            break;
        }
    }
    if (tries == maxTries) {
        printf("Game over! The word was: %s\n", word);
        printDeadman(tries);
    }

    return 0;
}
