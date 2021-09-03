#include<iostream>
#define MAXSIZE 10000
#define defaultArray 545, 2, 442, 6, 20, 54, 93, 42, 8, 15,667, 30
#define def 12
using namespace std;
int comp = 0;
int a[MAXSIZE] = {defaultArray}, n = def;
int backUp[MAXSIZE] = {defaultArray};//Backup to reset Array
char* sorts[] = {"Bubble Sort", "Selection Sort", "InsertionVSort", "Merge Sort", "Quick Sort"};
bool input() {
cout<<"Enter Size of array: "; cin>>n;
if(n==-1) {
	n=def;
return true;
}
if(n==0) {
return false;
}
cout<<"Enter Array Elements: \n";
for(int i=0;i<n;i++) {
cin>>a[i];backUp[i] = a[i];
}
cout<<"\nArray accepted...";
return true;
}
void disp() {
cout<<"Array : ";
for(int i=0;i<n;i++) {
cout<<a[i]<<' ';
}
cout<<endl;
}
//Function to Reset Array: Copies Values from Backup to main
//Array
void reset() {
for(int i=0;i<n;i++) a[i] = backUp[i];
cout<<"Array Reset...\n\n";
comp = 0;
}
//Bubble Sort
void bubblesort(int a[], int n) {
cout<<"Bubble Sorting...\n";
for(int i=0;i<n;i++) {
for(int j=0;j<n-i-1;j++) {
comp++;
if(a[j]>a[j+1]) {
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
}
//Selection Sort
void selectsort(int a[], int n) {
cout<<"Selection Sorting...\n";
for(int i=0;i<n-1;i++) {
int k=i;
int x = a[i];
for(int j=i+1;j<n;j++) {
comp++;
if(a[j]<x) {
x = a[j];
k=j;
}
}
int t = a[i];
a[i] = a[k];
a[k] = t;
}
}
//Insertion Sort
void insertsort(int a[], int n) {
cout<<"Insertion Sorting....\n";
for(int i=1;i<n;i++) {
int j = i-1;
int x = a[i];
comp++;
while(j>=0&&a[j]>x) {
	a[j+1] = a[j];
j--;
comp++;
}
a[j+1] = x;
}
}
//Merge Sort
void mergesort(int a[], int f, int r) {
if(f>=r) {
return;
}
int m = (f+r)/2;
mergesort(a, f, m);
mergesort(a, m+1, r);
int n1 = m-f+1, n2 = r-m;
int left[n1], right[n2];
for(int i=0;i<n1;i++) {
left[i] = a[f+i];
}
for(int i=0;i<n2;i++) {
right[i] = a[m+i+1];
}
int i=0, j=0, k=f;
while(i<n1 && j<n2) {
a[k++] = (left[i]<=right[j])?left[i++]:right[j++];
comp++;
}
while(i<n1) {
a[k++] = left[i++];comp++;
}
while(j<n2) {
a[k++] = right[j++];comp++;
}
}
//Quick Sort (Last Element as Pivot)
void quicksort(int a[],int l, int r) {
if(r-l <= 0) {
return;
}
int lo = l;
int hi = r;
int pivot = a[r];
while(true) {
while(a[lo]<pivot) {
comp++;
lo++;
}
while(hi>0 && a[--hi]>pivot) {
comp++;
}
if(lo>=hi) {
comp++;
break;
}
else {
int t = a[lo];
a[lo] = a[hi];
a[hi] = t;
}
}
int t = a[lo];
a[lo] = a[r];
a[r] = t;
quicksort(a, l, lo-1);
quicksort(a, lo+1, r);
}
//Function that performs all sorts and stores COMP values
void AllSort(int comps[]) {
bubblesort(a, n); comps[0] = comp; reset();
selectsort(a, n); comps[1] = comp; reset();
insertsort(a, n); comps[2] = comp; reset();
cout<<"Merge Sorting...\n";
mergesort(a, 0, n-1); comps[3] = comp; reset();
cout<<"Quick Sorting...\n";
quicksort(a, 0, n-1); comps[4] = comp; reset();
}
//Displays COMP values in tabular format
void showComparison(int comps[]) {
disp();
cout<<endl;
printf("\t| %-15s | %-15s |\n ", "Sorts", "Comparisons");
for(int i=0;i<5;i++) {
cout<<"\t-------------------------------------"<<endl;
printf("\t| %-15s | %-15d |\n", sorts[i], comps[i]);
}
cout<<endl;
}
int main() {
int comps[5];
while(input()) {
cout<<endl;
AllSort(comps);
showComparison(comps);
}
}

