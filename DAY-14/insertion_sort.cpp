#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {

    for(int i = 0; i < size; i++) {

        int temp = arr[i];
        int j = i - 1;

        while(j >= 0) {

            if(arr[j] > temp) {

                arr[j + 1] = arr[j];

            }

            else {
                break;
            }

            j--;

        }
        arr[j + 1] = temp;

    }

}

void printArray(int arr[], int size) {

    for(int i = 0; i < size; i++) {

        cout << arr[i] << " ";

    }

    cout << endl;

}

int main() {

    int arr[100], size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < size; i++) {

        cin >> arr[i];

    }

    insertionSort(arr, size);
    cout << "The sorted array is: ";
    printArray(arr, size);
}