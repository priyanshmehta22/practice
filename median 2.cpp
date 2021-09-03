#include <stdio.h>
int main(){
    int n1=0,n2=0;
    printf("Enter size of array 1 and array 2 respectively:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    int arr1[n1];//Array 1
    int arr2[n2];//Array 2
    
    printf("Enter elements of array 1:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }  
    printf("Enter elements of array 2:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int len=n1+n2,j=0;
    int new_arr[len];
    
    while(--n1>=0){
        new_arr[j++]=arr1[n1];
    }
    while(--n2>=0){
        new_arr[j++]=arr2[n2];
    }
    
    int temp=0;
    for (int i = 0; i < len-1; i++){
       for (int j = 0; j < len-i-1; j++){  
           if (new_arr[j] > new_arr[j+1]) {
             temp=new_arr[j];
             new_arr[j]=new_arr[j+1];
             new_arr[j+1]=temp;}}} 
    float med=0;
    if(len%2==1){//Find median for odd number
       med=(float)new_arr[(len-1)/2];}
    else if(len%2==0){//Find median for even number
        med=(float)(new_arr[len/2]+new_arr[(len-2)/2])/2; }    
    printf("\nMedian = %.2f",med);//Printing median of the two arrays
    return 0;
}
