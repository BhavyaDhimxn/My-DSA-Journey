#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[], int i, int j) {

    if(i < 1) return;

    if(j < i) {
        if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }

      bubbleSort(arr, i, j + 1);
    }

    else bubbleSort(arr, i - 1, 0);

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

    bubbleSort(arr, n - 1, 0);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}