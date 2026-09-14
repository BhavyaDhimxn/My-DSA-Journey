#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n) {
    //Outer loop -> Reduces range by 1 element from left in every iteration as leftmost(minimum) element gets correctly placed.
    //Outer loop -> From 0 to (n - 2), as last element is already sorted after (n - 2) iteration.
    for(int i = 0; i < n - 1; i++) {
        //Initialise a variable with the leftmost(minimum) index as just decalaration gives it garbage value.
        //Case: If no smaller element is found, the leftmost element will be swapped with variable containing garbage value.
        int minimum = i;
        
        //Inner loop -> From (i + 1) to n - 1.
        //Start != 0 as in 2nd iteration 0th element is correctly placed.
        //Start != i as it is taken as the minimum, no need to compare it with itself.
        for(int j = i + 1; j < n; j++) {
            //Check for global minimum in the current range. 
            //Check every element in the range against our assumed minimum and updated the minimum correctly.
            if(arr[j] < arr[minimum]) minimum = j;
        }
        //Swap assumed minimum element with actual minimum element.
        swap(arr[i], arr[minimum]);
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