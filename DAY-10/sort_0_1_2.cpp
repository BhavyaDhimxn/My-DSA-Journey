#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int n){
    int i = 0, j = 0, k = n - 1;

    while(j <= k){
        
        if(arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[j] == 1){
            j++;
        }
        else{
            swap(arr[j], arr[k]);
            k--;

        }

    }

}

int main(){
    int arr[100], size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array (0s, 1s and 2s only): ";
    for(int i = 0; i < size ; i++){
        cin >> arr[i];
    }

    sortArray(arr, size);
    cout << "The sorted array is: ";
    printArray(arr, size);

    return 0;
}