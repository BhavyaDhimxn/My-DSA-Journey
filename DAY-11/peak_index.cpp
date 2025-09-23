#include<iostream>
using namespace std;

int peakIndex(int arr[], int size) {

    int start = 0, end = size - 1;

    while(start < end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        
        else {
            end = mid;
        }

        mid = start + (end - start) / 2;

    }

    return start; // Peak index

}

int main() {
    
    int arr[100], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the mountain array (sorted): ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int result = peakIndex(arr, size);
    cout << "Peak Index of mountain array is: " << result << endl; 

    return 0;

}