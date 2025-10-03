#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int size) {

    int start = 0, end = size - 1;

    for (; start < end; start++, end--) {

        swap(arr[start], arr[end]);

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

    cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, size);
    cout << "Reversed array: ";
    printArray(arr, size);

    return 0;

}