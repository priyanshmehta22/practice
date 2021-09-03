#include<stdio.h>
int main(){
	int number=999;
	int guess;
	int guesslimit=3;
	int guesscount=0;
	int outofguesses=0;
	while(guess!=number && outofguesses==0){
		if(guesscount<guesslimit){
			printf("enter a number again");
			scanf("%d",&guess);
			guesscount++;}
		else{
			outofguesses=1;
		}
		}
		if(outofguesses==1){
		
		printf("sorry");}
		else {	
		printf("you win");}}
