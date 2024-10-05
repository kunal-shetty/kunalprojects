#include <stdio.h>
#define SIZE 3

void printBoard(char board[SIZE][SIZE]);
int checkWin(char board[SIZE][SIZE]);
int isDraw(char board[SIZE][SIZE]);

int main(){
    char board[SIZE][SIZE]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int player=1;
    int choice;
    int row,col;
    char mark; 
    int gameStatus=0; 
    printf("****Tic-Tac-Toe!!****\n");
    while(gameStatus==0){
        printBoard(board);
        player=(player%2)?1:2;
        mark=(player==1)?'X':'O';
        printf("\nPlayer %d, Enter a number to place your mark!\n(%c) : ", player,mark);
        scanf("%d",&choice);
        row=(choice-1)/SIZE;
        col=(choice-1)%SIZE;
        if(choice<1||choice>9|| board[row][col]=='X'||board[row][col]=='O'){
            printf("\nInvalid move! Try again.\n");
            continue;
        }
        board[row][col]=mark;
        gameStatus=checkWin(board);
        if(gameStatus==0&&isDraw(board)){
            gameStatus=-1;  
        }
        player++;
    }
    printBoard(board);
    if(gameStatus==1){
        printf("\n==> Player %d wins! \n", --player);
    }else
        printf("\n==> It's a draw!\n");

    return 0;
}
void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("  %c ", board[i][j]);
            if(j<SIZE-1) 
            printf(" |");
        }
        if (i<SIZE-1) 
        printf("\n ----|-----|-----\n");
    }
    printf("\n");
}

int checkWin(char board[SIZE][SIZE]){
    for (int i=0;i<SIZE;i++){
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]) 
        return 1;
        if(board[0][i] ==board[1][i]&&board[1][i]==board[2][i]) 
        return 1;
    }

    if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]) 
    return 1;
    if(board[0][2]==board[1][1]&&board[1][1] 
    ==board[2][0]) 
    return 1;
    return 0;
}

int isDraw(char board[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(board[i][j]!='X'&&board[i][j]!='O')
            return 0;
        }
    }
    return 1;
}