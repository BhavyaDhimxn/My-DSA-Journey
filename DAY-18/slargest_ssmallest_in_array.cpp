#include<iostream>
#include<vector>
using namespace std;

int secondLargest(vector<int> &arr, int n) {

    int largest = arr[0], slargest = INT_MIN;
    
    for(int i = 1; i < n; i++) {
        
        if(arr[i] > largest) {
            
            slargest = largest;
            largest = arr[i];

        }
        else if(arr[i] < largest && arr[i] > slargest) {

            slargest = arr[i];

        }

    }

    return slargest;
}

int secondSmallest(vector<int> &arr, int n) {

    int smallest = arr[0], ssmallest = INT_MAX;
    
    for(int i = 1; i < n; i++) {
        
        if(arr[i] < smallest) {
            
            ssmallest = smallest;
            smallest = arr[i];

        }
        else if(arr[i] > smallest && arr[i] < ssmallest) {

            ssmallest = arr[i];

        }

    }

    return ssmallest;
}

int main() {
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int second_largest = secondLargest(arr, n);
    int second_smallest = secondSmallest(arr, n);

    cout << "Second Largest: " << second_largest << endl;
    cout << "Second Smallest: " << second_smallest << endl;
}