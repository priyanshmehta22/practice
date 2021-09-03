#include<stdio.h>
int main(){
	int number=999;
	int guess;
	int guesslimit=3;
	int guesscount=0;

	printf("enter a number ");
	scanf("%d",&guess);
	while(guesscount<guesslimit && guess==number ){

			printf("enter a number again ");
			scanf("%d",&guess);
			guesscount++;
		
		
		printf("you win");
		break;}

	return 0;
}
