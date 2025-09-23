#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key) {

    int start = 0, end = size - 1, ans = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            end = mid  - 1;
        }

        else if(arr[mid] > key) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;

    }

    return ans;

}

int lastOccurance(int arr[], int size, int key) {

    int start = 0, end = size - 1, ans = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            start = mid  + 1;
        }

        else if(arr[mid] > key) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;

    }

    return ans;

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

    cout << "First Occurance of " << key << " is at index: " << firstOccurance(arr, size, key) << endl;
    cout << "Last Occurance of " << key << " is at index: " << lastOccurance(arr, size, key) << endl;
}