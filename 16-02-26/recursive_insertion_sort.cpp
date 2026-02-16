#include<iostream>
#include<algorithm>
using namespace std;

void insertionSort(int arr[], int i, int n) {

    if(i == n) return;

    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]){
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertionSort(arr, i + 1, n);

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

    insertionSort(arr, 0, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}