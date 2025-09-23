#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    
    int start = 0, end = size - 1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            return mid;
        }

        else if(arr[mid] > key){
            end = mid -1;
        }

        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;

    }

    return -1; // Element not found
    
}

int main() {
    
    int arr[100], size, key;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array (sorted): ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;
    
    int result = binarySearch(arr, size, key);
    cout << (result != -1 ? "Element found at index: " + to_string(result) : "Element not found") << endl; 

    return 0;

}