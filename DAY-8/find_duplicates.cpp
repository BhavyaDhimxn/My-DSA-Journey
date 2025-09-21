#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findAllDuplicates(vector<int> &arr) {
    // Sort the array
    sort(arr.begin(), arr.end());

    cout << "Duplicate numbers are: ";
    bool hasDuplicates = false;

    // Traverse the sorted array and check for duplicates
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            cout << arr[i] << " ";
            hasDuplicates = true;

            // Skip over consecutive duplicates
            while (i < arr.size() - 1 && arr[i] == arr[i + 1]) {
                i++;
            }
        }
    }

    if (!hasDuplicates) {
        cout << "No duplicates found.";
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findAllDuplicates(arr);

    return 0;
}