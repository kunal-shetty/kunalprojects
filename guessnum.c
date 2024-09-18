#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int num,guess,tries=5;
printf("Enter your number lying between 1-100\n");
scanf("%d",&guess);
srand(time(NULL));
num=rand()%100+1;
do{
if(num==guess){
printf("\nCongratulations, You have guessed the number");
printf("\nRemaining tries : %d",tries);
return 0;
}
else if(guess>num){
printf("\nYour guess was too high, try again");
tries--;
printf("\nRemaining tries : %d\n",tries);
scanf("%d",&guess);
}
else{
printf("\nYour guess was too low, try again");
tries--;
printf("\nRemaining tries : %d\n",tries);
scanf("%d",&guess);
}
}while(tries!=1);
printf("\nYou have failed to guess the number");
printf("\nThe number was %d",num);
return 0;
}