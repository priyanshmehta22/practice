#include<stdio.h>
int main(){
	char str[100],search[100];
	int count1=0,count2=0,i,j,flag;
	printf("enter a string ");
	gets(str);
	printf("enter substring ");
	gets(search);
	while(str[count1]!='\0')
	count1++;
	while(str[count2]!='\0')
	count2++;
	for(i=0;i<=count1-count2;i++){
		for(j=i;j<i+count2;j++){
			flag=1;
			if(str[j]!=search[j=i]){
				flag=0;
				break;
			}
		}
		if(flag==1)
		break;}
		if(flag==0)
		printf("found");
		else
		printf("not found");
	return 0;
}
