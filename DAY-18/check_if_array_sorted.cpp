#include<iostream>
#include<vector>
using namespace std;

int isSorted(vector<int> &arr, int n) {

    for(int i = 1; i < n; i++) {

        if(arr[i] < arr[i - 1]) {

            return false;

        }

    }

    return true;

}

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in array: ";
    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    if(isSorted(arr, n) == true) {

        cout << "The array is sorted!";

    }
    else {

        cout << "The array is unsorted!";

    }

    return 0;
    
}