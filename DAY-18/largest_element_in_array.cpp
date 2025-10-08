#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector <int> &arr, int n) {
    
    int largest = arr[0];
    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            
            largest = arr[i];

        }

    }

    return largest;

}

int main() {

    vector<int> arr;
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    arr.resize(size);
    
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {

        cin >> arr[i];

    }

    int n = arr.size();
    int largest = largestElement(arr, n);

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}