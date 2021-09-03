#include <stdio.h>
int sorting(int n,int* p){
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( *(p+j)<*(p+i)){
                int t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
int sortingrev(int n,int* p){
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( *(p+j)>*(p+i)){
                int t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
int main(){
    int a[3][3];
    int b[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<3;i++){
        sorting(3,a[i]);
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
    for (int i=0;i<3;i++){
        sortingrev(3,b[i]);
    }
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",b[j][i]);
        }
        printf("\n");
    }
}
