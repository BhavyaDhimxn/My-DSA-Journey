#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {

        int minimum = i;
        for(int j = i; j < n; j++) {

            if(arr[j] < arr[minimum])
            minimum = j;

        }

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