#include<iostream>
#include<algorithm>
using namespace std;

void recursiveInsertionSort(int arr[], int i, int n) {
    //Base Case: If i becomes greater than n - 1, we return.
    if(i > n - 1) return;
    //Initialise a variable with value of previous element of i.
    int j = i - 1;
    //Initialise a key, which stores the vale of selected element.
    int key = arr[i];

    //Loop -> Runs while j >= 0, and jth element/(i - 1)th is greater than key.
    while(j >= 0 && arr[j] > key) {
        //Right shift the element greater than key and reduce j.
        arr[j + 1] = arr[j];
        j--;
    }
    //Put the key in the correct index.
    arr[j + 1] = key;
    //Recursive call with increased range.
    recursiveInsertionSort(arr, i + 1, n);
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

    recursiveInsertionSort(arr, 1, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}