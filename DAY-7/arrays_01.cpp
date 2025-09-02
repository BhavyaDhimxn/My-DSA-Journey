#include<iostream>
using namespace std;

int getMax(int arr[], int n){

    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
        // if(arr[i] > max){
        //     max = arr[i];
        // }
    }

    return maxi;
}

int getMin(int arr[], int n){

    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        mini = min(mini, arr[i]);
        // if(arr[i] < min){
        //     min = arr[i];
        // }
    }

    return mini;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = getMax(arr, n);
    int min = getMin(arr, n);

    cout << "Maximum element is: " << max << endl;
    cout << "Minimum element is: " << min << endl;

    return 0;
}