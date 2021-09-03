#include<stdio.h>
int main(){
	int m,n,i,j,k,p,q,sum=0;
	int mat1[10][10], mat2[10][10], mul[10][10];
	printf("no of r and c in mat1: ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter elements in mat1: ");
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("no of r and c in mat2: ");
	scanf("%d%d",&p,&q);
	if(n!=p){
		printf("not possible");
	}
	else{
	
		for(i=0;i<p;i++){
			for(j=0;j<q;j++){
				printf("enter elements in mat2: ");
				scanf("%d",&mat2[i][j]);
			}
		}
	}
	for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				for(k=0;k<p;k++){
				sum=sum+mat1[i][k]*mat2[k][j];
				}
	mul[i][j]=sum;
	sum=0;}}
printf("the prod is ");
for(i=0;i<m;i++){
			for(j=0;j<q;j++){
printf("%d",mul[i][j]);}
			}
	
}
