#include<stdio.h>
// PRIYANSH MEHTA (20BCE2292)
int n;
int fact(int n){
	if(n==1 || n==0){
		return 1;
	}
	else{
		return (n*fact(n-1));
	}
}
int main(){
	scanf("%d",&n);
	printf("the factorial of %d is %d",n, fact(n));
}
