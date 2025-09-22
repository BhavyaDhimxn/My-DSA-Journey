#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void sortArray(int arr[], int n){
    
    int i = 0, j = n - 1;

    while(i < j){
        
    while(arr[i] == 0 && i < j){
        i++;
    }

    while(arr[j] == 1 && i < j){
        j--;
    }

    if(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    }
    
}

int main(){
    int arr[100], size;
    
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array (0s and 1s only): ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sortArray(arr, size);
    cout << "The sorted array is: ";
    printArray(arr, size);

    return 0;
}