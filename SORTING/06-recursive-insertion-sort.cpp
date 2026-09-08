#include<iostream>
#include<algorithm>
using namespace std;

void recursiveInsertionSort(int arr[], int i, int n) {
    //Return as i = n, as we will go out of bounds.
    if(i == n) return;
    //In every call j will take the value of i, placing each i at correct position in the range.
    int j = i;
    //Loop to do placing.
    while(j > 0 && arr[j] < arr[j - 1]) {
        swap(arr[j], arr[ j - 1]);
        j--;
    }
    //Call recursive function, increasing the value of i.
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

    recursiveInsertionSort(arr, 0, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}