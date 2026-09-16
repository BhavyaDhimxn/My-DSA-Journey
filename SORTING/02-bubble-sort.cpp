#include<iostream>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

void bubbleSort(int arr[], int n) {
    //Outer loop -> Runs (n - 1) to 0. We place the rightmost(maximum) element of the current range correctly in each iteration.
    //Reduce the range in each iteration from right as rightmost(maximum) element gets correctly placed.
    for(int i = (n - 1); i > 0; i--) {
        //Inner loop -> Runs 0 to (i - 1). Till (i - 1) as every iteration we only have to traverse the range given by outer loop.
        //Not till i as we compare the current with next element, to prevent out of bound error.
        for(int j = 0; j < i; j++) {
            //Check for greater element and swap alternately. Push the greatest element to ith position.
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}
*/

/*
OPTIMAL APPROACH:
*/
void bubbleSort(int arr[], int n) {
    //Outer loop -> Runs (n - 1) to 1. We place the rightmost(maximum) element of the current range correctly in each iteration.
    //Reduce the range in each iteration from right as rightmost(maximum) element gets correctly placed.
    for(int i = n - 1; i > 0; i--) {  
        //Optimisation -> Initialise a variable to keep track if any swapping happens.
        bool swapped = 0;
        //Inner loop -> Runs 0 to (i - 1). Till (i - 1) as every iteration we only have to traverse the range given by outer loop.
        //Not till i as we compare the current with next element, to prevent out of bound error.
        for(int j = 0; j < i; j++) {
            //Check for greater element and swap alternately. Push the greatest element to ith position.
            //If Swapping takes place, mark the variable as true.
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        //if no swap took place in the first iteration -> already sorted.
        //Use break instead of return, if there is more code after this check in the function, it wont execute.
        if(!swapped) break;
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

    bubbleSort(arr, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}