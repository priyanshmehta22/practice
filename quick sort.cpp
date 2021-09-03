//quicksort
// PRIYANSH MEHTA (20BCE2292)
#include <iostream>
int count = 0; 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int arr[], int low, int high){
    int pivot = arr[high]; 
    int i = low - 1;
    for (int j = low; j<=high-1; j++) {
        count++;
        if (arr[j]<=pivot)  {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
      
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}
int main() {
    int arr[] = {3, 428, 328, 50, 229, 254, 207, 243, 210, 255, 426, 17, 214};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    std::cout<<"The sorted array is: "<<std::endl;
    for (int i = 0; i<n; i++) {
        std::cout<< arr[i] <<", ";
    }
    std::cout<<std::endl;
    std::cout<<"Number of comparisions performed "<< count <<std::endl;
    return 0;}
