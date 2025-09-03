#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100], size, key;
    cout << "Enter the size of array: ";
    cin >> size;
    
    cout << "Enter the elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> key;

    bool found = linearSearch(arr, size, key);
    if(found){
        cout << "Element is present in the array" << endl;
    } else {
        cout << "Element is not present in the array" << endl;
    }
}