/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Program to implement guessing game
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));
	int secret = rand() %20+1;// 1..20
	int guess;
	int attempts = 0;
	
printf("Guess the number (1-20):\n");
while(1){
	if(scanf("%d",&guess) !=1) break;
    attempts++;
     if(guess>secret){
		 printf("Too high!\n");
	 }else if (guess<secret){
	 	printf("Too low!\n");	 
	 }else {
	 	printf("Congratulations!You guessed it in %d attempts.\n",attempts);
	 	break;
	 }
}	
	return 0;
}
