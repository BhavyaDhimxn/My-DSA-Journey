#include<iostream>
#include<algorithm>
using namespace std;

void insertionSort(int arr[], int n) {
    //Element at index i is selected every time to be correctly placed.
    for(int i = 0; i < n; i++) {
        //creates ranges 0 - i.
        int j = i;
        //j > 0 due to the comparison.
        while(j > 0 && arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
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

    insertionSort(arr, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}