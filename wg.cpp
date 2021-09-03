#include<iostream> 
#include<string.h> 
using namespace std; 
int main()
{
int n,temp;
char temp1[100];
cout<<"Enter the number of players : "; cin>>n;
int p[n];
char name[n][100];
for(int i=0;i<n;i++)
{
cout<<"Enter the name of player "<<i+1<<": "; fflush(stdin);
cin>>name[i];
cout<<"Enter the score of player "<<i+1<<": "; cin>>p[i];
}
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++) {
if(p[i]<p[j]) {
temp=p[i]; strcpy(temp1,name[i]); p[i]=p[j]; strcpy(name[i],name[j]); p[j]=temp; strcpy(name[j],temp1);
} }
cout<<"\nWINNER :- Name : "<<name[0]<<" Score :"<<p[0]; cout<<"\nSECOND :- Name : "<<name[1]<<" Score :"<<p[1]; 
cout<<"\nWORST :- Name : "<<name[n-1]<<" Score :"<<p[n-1]; cout<<"\nNEXT WORST :- Name : "<<name[n-2]<<" Score :"<<p[n-2];
}
