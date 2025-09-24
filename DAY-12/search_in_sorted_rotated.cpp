#include<iostream>
using namespace std;

int pivotIndex(int arr[], int size) {

    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end) {

        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }

        else {
            end = mid;
        }

        mid = start + (end - start) / 2;

    }

    return start;

}

int binarySearch(int arr[], int start, int end, int key) {
    
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

    }

    return -1; 
    
}

int searchInSortedRotated(int arr[], int size, int key) {

    int pivot = pivotIndex(arr, size);

    if(key >= arr[pivot] && key <= arr[size - 1]) {
        return binarySearch(arr, pivot, size - 1, key);
    }

    else {
        return binarySearch(arr, 0, pivot - 1, key);
    }

}

int main() {
        
        int arr[100], size, key;
    
        cout << "Enter the size of the array: ";
        cin >> size;
    
        cout << "Enter the elements of the array (sorted and rotated): ";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    
        cout << "Enter the key to search: ";
        cin >> key;
        
        int result = searchInSortedRotated(arr, size, key);
        cout << (result != -1 ? "Element found at index: " + to_string(result) : "Element not found") << endl; 
    
        return 0;
}