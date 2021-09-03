#include<stdio.h>
#define PI 3.14
int main ()
{
	int index,x= 0;
	scanf("%d",&index);
	do{
		
		printf("%d\n",x);
		x+=2;
	}
	while(x<index);
	return 0; 
}
