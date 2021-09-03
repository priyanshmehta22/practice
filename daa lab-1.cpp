#include <iostream>

int main(int argc, const char * argv[]) {
    int inversions = 0;
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]){
                inversions++;
                std::cout << arr[i] << ", " << arr[j] << std::endl;
    }
    std::cout << "No. of inversions: " << inversions;
}
