#include<stdio.h>
int main(){
	int number=999;
	int guess;
	int guesscount=0;
	printf("enter a number");
	scanf("%d",&guess);
	while(guesscount<2){
		if(guess==number)
		{printf("you win");
		break;}
		else
		{
			guesscount=guesscount+1;
			printf("enter a number again");
			scanf("%d",&guess);
		 }
	}
	return 0;
}
