#include<iostream>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

void recursiveBubbleSort(int arr[], int n) {
    //The last element of the range initialised.
    int i = n - 1;
    //If just one element remains, it is already sorted, no need to redo.
    if(i < 1) return;

    for(int j = 0; j < n - 1; j++) {
        if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
    }
    //Call the recursive function, with reduced range.
    recursiveBubbleSort(arr, i);
}
*/

/*
OPTIMAL APPROACH:
*/
void recursiveBubbleSort(int arr[], int n) {
    //The last element of the range initialised.
    int i = n - 1;
    //If just one element remains, it is already sorted, no need to redo.
    if(i < 1) return;
    int swapped = 0;

    for(int j = 0; j < n - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            swapped++;
        }
    }
    //If already sorted -> return.
    if(swapped == 0) return;
    //Call the recursive function, with reduced range.
    recursiveBubbleSort(arr, i);
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

    recursiveBubbleSort(arr, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}