#include<iostream>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

void recursiveBubbleSort(int arr[], int n) {
    //If just one element remains, it is already sorted, no need to redo.
    if(n <= 1) return;

    //Loop -> Runs from 0 to (n - 2). Same logic as normal Bubble Sort.
    for(int j = 0; j < n - 1; j++) {
        if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
    }
    //Call the recursive function, with reduced range.
    recursiveBubbleSort(arr, n - 1);
}
*/

/*
OPTIMAL APPROACH:
*/
void recursiveBubbleSort(int arr[], int n) {
    //Base Case: If array size is 1 or less.
    if(n <= 1) return;
    //Initialise a variable to keep a track of swapping.
    bool swapped = 0;

    //Loop -> Runs from 0 to (n - 2). Same logic as normal Bubble Sort.
    for(int i = 0; i < (n - 1); i++) {
        //Alternate swaps to push greatest element to the rightmost position in the range.
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            //Mark the variable if swapping takes place.
            swapped = 1;
        }
    }
    //Return if no swapping took place.
    if(!swapped) return;
    //Recursive call: with reduced range(n - 1).
    recursiveBubbleSort(arr, n - 1);
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