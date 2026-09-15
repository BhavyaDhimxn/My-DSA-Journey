#include<iostream>
#include<algorithm>
using namespace std;


void insertionSort(int arr[], int n) {
    //Outer loop -> Runs 0 to (n - 1). Every iteration element at index i is the chosen element to be inserted correctly.
    for(int i = 1; i < n; i++) {
        //Initialise another pointer j for inner loop which is for the range and reduces in every iteration as elemt is swapped.
        //Only works whenever j >= 0.
        int j = i - 1;
        //Initialise the key with ith element(to be placed correctly).
        int key = arr[i];

        //Inner loop -> Runs while j >= 0, and jth element/(i - 1)th is greater than key.
        while(j >= 0 && arr[j] > key) {
            //Shift the greater element to right and reduce j.
            arr[j + 1] = arr[j];
            j--;
        }
        //Place key in the correct position.
        arr[j + 1] = key;
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