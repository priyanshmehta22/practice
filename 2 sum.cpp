#include<stdio.h>
int main(){
	int arr[5];
	int n,i,j;
	//scanf("%d",&n);
	for(i=0;i<5;i++){
		scanf("%d\n",&arr[i]);	
	}
	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
		
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
		
		
		
		if(arr[i]+arr[j]==9){
			printf("the two numbers are %d, %d",arr[i],arr[j]);
			
		}
	
		}}
	
	
	return 0;
}
