#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    int start = 0;
    int alternate = start + 1;

    while(start < size && alternate < size){
        swap(arr[start], arr[alternate]);
        start += 2;
        alternate += 2;
    } 
}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[100], size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    cout << "Enter the elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    swapAlternate(arr, size);
    cout << "The array after swapping alternate elements is: ";
    printArray(arr, size);
}