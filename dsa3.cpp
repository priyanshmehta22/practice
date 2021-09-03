#include <iostream>
#include <string.h>
#define max 3 //max numbeer of entries fixed

//creating a struct with regNo, name, cgpa of int, string and int data types respectively
struct studentData{
    int regNo;
    std::string name;
    int cgpa;
};


// bubble sort function to sort the entries of studentData type according to regNo
void bubbleSort(studentData x[], int n){
    studentData temp;
    for (int i = 0; i<n-1; i++) {
        for (int j = 0; j<n-1-i; j++) {
            if (x[j].regNo > x[j + 1].regNo){
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
//a function to print all details of all students in ascending order of regNo
void print(studentData x[], int n){
    std::cout << "Following details are present (ascending order):  " << std::endl;
    for (int i = 0; i<n; i++) {
        std::cout<<x[i].regNo<<", "<<x[i].name<<", "<<x[i].cgpa<<std::endl;
    }
}

//binary search function to search for details by regNo and return
int binarySearch(studentData arr[], int l, int r, int x){
    //l is the lower index, r is highest index-1
    if (r >= l) {
        //finding mid element for binary search
        int mid = l + (r - l) / 2;
        
        //if the mid element is the search query itself then return
        if (arr[mid].regNo == x)
            return mid;
        
        //if search query is lesser than mid, it will be present in the left array, calling binarySeasrch funtion recursively
        if (arr[mid].regNo > x)
            return binarySearch(arr, l, mid - 1, x);
        
        //if search query is greater than mid, it will be present in the righ array, calling binarySeasrch funtion recursively
        return binarySearch(arr, mid + 1, r, x);
    }
    
    //funtion returns -1 if search query is not found
    return -1;
}

int main() {
    //initialising three variables of type studentData
    studentData one,two,three;
    
    //assigning values to respective variables
    one.regNo = 60;
    one.name = "priyansh";
    one.cgpa = 8;
    
    two.regNo = 75;
    two.name = "me";
    two.cgpa = 7;
    
    three.regNo = 71;
    three.name = "hello";
    three.cgpa = 9;
    
    //creating an array of type studentData of length max = 3
    studentData details[max] = {one, two, three};
    int n = max; //number of entries
    //calling bubble sort to sort the array sccording to regNo
    bubbleSort(details, n);
    print(details, n);
    
    int x = 75; //search query
    int result = binarySearch(details, 0, n - 1, x);
    std::cout<<std::endl;
    std::cout<<"student found at serial number: "<<result<<std::endl;
    std::cout<<std::endl;
    std::cout << "reg no: " << details[result].regNo << ", " << "Name: " << details[result].name << ", " <<"cgpa: " << details[result].cgpa << std::endl;
    std::cout<<std::endl;

    return 0;
}
