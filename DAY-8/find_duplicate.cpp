#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr) {
    int ans = 0;

    // XOR all elements in the array
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    // XOR with numbers from 1 to n-1
    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array (including the duplicate): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int duplicate = findDuplicate(arr);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}