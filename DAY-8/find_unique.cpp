#include<iostream>
using namespace std;

int findUnique(int arr[], int size){

    int ans = 0;

    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[100], size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    cout << "Enter the elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr, size);
    cout << "The unique element in the array is: " << uniqueElement << endl;
}
