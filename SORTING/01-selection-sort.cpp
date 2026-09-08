#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        //Store the minimum index in the current range.
        int minimum = i;
        //Retreive the actual minimum index.
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[j - 1]) {
                minimum = j;
            }
        }
        //Swap assumed minimum element(1st in the range) with actual one.
        swap(arr[minimum], arr[i]);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    int arr[n];
    cout << "Populate your array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}