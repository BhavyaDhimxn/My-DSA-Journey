#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size) {

    for(int i = 0; i < size - 1; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);

            }

        }

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
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    bubbleSort(arr, size);
    cout << "Sorted array is: ";
    printArray(arr,size);

    return 0;
}