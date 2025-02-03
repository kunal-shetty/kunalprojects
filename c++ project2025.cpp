#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

void printWord(const char word[], int wordLength, const int correctGuesses[]){
    for(int i = 0; i < wordLength; i++){
        if(correctGuesses[i])
            cout<<word[i]<<" ";
        else
            cout<<"_ ";
    }
    cout<<endl;
}

bool checkGuess(const char word[], char guess, int correctGuesses[], int wordLength){
    bool correct = false;
    for(int i = 0; i < wordLength; i++){
        if(word[i] == guess && !correctGuesses[i]){
            correctGuesses[i] = 1;
            correct = true;
        }
    }
    return correct;
}

bool checkWin(const int correctGuesses[], int wordLength){
    for(int i = 0; i < wordLength; i++){
        if(!correctGuesses[i])
            return false;
    }
    return true;
}

void hint(int tries){
    if(tries > 3)
        cout<<"Hint: It is a red-colored fruit";
}

void printHangman(int t){
    const char* hangmanStages[] = {
        "   +---+\n   |   |\n   |   \n   |\n   |\n   |\n=========\n",
        "   +---+\n   |   |\n   |   0\n   |\n   |\n   |\n=========\n",
        "   +---+\n   |   |\n   |   0\n   |   |\n   |\n   |\n=========\n",
        "   +---+\n   |   |\n   |   0\n   |  /|\n   |\n   |\n=========\n",
        "   +---+\n   |   |\n   |   0\n   |  /|\\\n   |\n   |\n=========\n",
        "   +---+\n   |   |\n   |   0\n   |  /|\\\n   |  / \n   |\n=========\n",
        "YOU GOT HANGED\n   +---+\n   |   |\n   |   *\n   |  /|\\\n   |  / \\\n   |\n=========\n"
    };
    
    cout<<hangmanStages[t]<<endl;
}

int main() {
    string word = "APPLE";  // Change this word as needed
    int wordLength = word.length();
    int correctGuesses[wordLength] = {0};

    int maxTries = 6, tries = 0;
    char guess;

    cout<<"Welcome to Hangman!!!\n\n";

    while(tries < maxTries){
        printHangman(tries);
        printWord(word.c_str(), wordLength, correctGuesses);
        hint(tries);
        cout<<"\nEnter your guess (single letter): ";
        cin>>guess;
        guess = toupper(guess);

        if(!checkGuess(word.c_str(), guess, correctGuesses, wordLength)){
            tries++;
            cout<<"\nWrong guess! Tries remaining: "<<maxTries - tries<<endl;
        }
		else 
        cout << "\nGood guess!\n";

        if(checkWin(correctGuesses, wordLength)){
            cout<<"Congratulations! You've guessed the word: "<<word<<endl;
            break;
        }
    }

    if(tries == maxTries){
        cout<<"Game over! The word was: "<<word<<endl;
        printHangman(tries);
    }
    return 0;
}

