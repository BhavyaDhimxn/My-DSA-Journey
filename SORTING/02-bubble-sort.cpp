#include<iostream>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

void bubbleSort(int arr[], int n) {
    //Loop starts from nth element(so that nth element of every range gets sorted)
    for(int i = n - 1; i >= 0; i--) {
        //Starts from 1 so that in 1st iteration element at the 0th index can be compared.
        for(int j = 1; j < n; j++) {
            //Push the greatest element to (n-1)th position.
            if(arr[j] < arr[j - 1]) swap(arr[j], arr[j - 1]);
        }
    }
}
*/

/*
OPTIMAL APPROACH:
*/
void bubbleSort(int arr[], int n) {
    //Loop starts from nth element(so that nth element of every range gets sorted)
    for(int i = n - 1; i >= 0; i--) {  
        int swapped = 0;
        //Starts from 1 so that in 1st iteration element at the 0th index can be compared.
        for(int j = 1; j < n; j++) {
            //Push the greatest element to (n-1)th position.
            if(arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                swapped++;
            }
        }
        //if no swap took place in the first iteration -> already sorted.
        if(swapped == 0) break;
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