#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> mergeSortedArrays(vector<int> &arr1, vector<int> &arr2) {
    
    vector<int> merged;
    int i = 0, j = 0;

    while(i < arr1.size() && j < arr2.size()) {
        
        if(arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }

    }

    while(i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    while(j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
    
}

void printArray(vector<int> v) {

    for(int i = 0; i < v.size(); i++) {

        cout << v[i] << " ";

    }

    cout << endl;

}

int main() {

    vector<int> arr1, arr2;
    int n1, n2;

    cout << "Enter the number of elements in first sorted array: ";
    cin >> n1;

    cout << "Enter elements of first sorted array: ";
    for(int i = 0; i < n1; i++) {

        int x;
        cin >> x;
        arr1.push_back(x);

    }

    cout << "Enter the number of elements in second sorted array: ";
    cin >> n2;

    cout << "Enter elements of second sorted array: ";
    for(int i = 0; i < n2; i++) {

        int x;
        cin >> x;
        arr2.push_back(x);

    }

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);
    cout << "Merged sorted array: ";
    printArray(mergedArray);

    return 0;
    
}