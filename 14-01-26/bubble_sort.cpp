#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i = n - 1; i > 0; i--) {

        for(int j = 0; j <= i - 1; j++) {

            if(arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);

        }

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