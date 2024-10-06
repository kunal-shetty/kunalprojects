//quiz game with score counter
#include<stdio.h>
#include<ctype.h>
int main(){
    char guess;
    char questions[][100]={"What is the value of (AF) base 16 in decimal?","What is the Boolean expression for EX-NOR gate?","What is the IC number of NOR gate"};
    char options[][100]={"A.175 B.176 C.165 D.190","A. AB'+A'B B. A'B+A'B' C. A'B'+AB D. AB+A'B","A.7400 B.7404 C.7408 D.7402"};
    char answers[]={'A','C','D'};
    int i,score=0,q=sizeof(questions)/sizeof(questions[0]);
    for(i=0;i<q;i++){
        printf("\n*********************************************\n");
        printf("%s\n",questions[i]);
        printf("*********************************************\n\n");
        printf("Options\n%s\n\nYour answer : ",options[i]);
        scanf("%c",&guess);
        scanf("%c");
        int g=toupper(guess);
        if(g==answers[i]){
        printf("\nCorrect!!");
        score++;
        printf("\nYour score : %d\n",score);
        }
        else if(g=='A'||g=='B'||g=='C'||g=='D'){
        printf("\nIncorrect :(");
        printf("\nYour score : %d\n",score);
    }
        else{
        printf("\nInvalid Input, try again\n");
        i--;
        }
    }
    printf("\n\n*********************************************\n");
    if(score==q)
    printf("Congratulations on getting a perfect score!!\n");
    printf("\nFinal score\n%d out of %d",score,q);
    
    return 0;
}