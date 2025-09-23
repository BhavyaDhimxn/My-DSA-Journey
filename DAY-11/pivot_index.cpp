#include<iostream>
using namespace std;

int pivotIndex(int arr[], int size) {

    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while( start <= end ) {

        int left_sum = 0;
        int right_sum = 0;

        for(int i = 0; i < mid; i++) {
            left_sum += arr[i];
        }

        for(int i = mid + 1; i < size; i++) {
            right_sum += arr[i];
        }

        if(left_sum == right_sum) {
            start = mid;
            return start; // Pivot index found
        }

        else if(left_sum < right_sum) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }
    return -1; // Pivot index not found
}

int main() {
    
    int arr[100], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int result = pivotIndex(arr, size);
    cout << (result != -1 ? "Pivot Index is: " + to_string(result) : "Pivot Index not found") << endl; 

    return 0;

}