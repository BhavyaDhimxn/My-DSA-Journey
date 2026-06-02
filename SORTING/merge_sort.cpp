#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high) {
        if(arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {

        arr[i] = temp[i - low];

    }
}

void mS(vector<int> &arr, int low, int high) {

    int mid = (low + high) / 2;
    if(low == high) return;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);

}

void mergeSort(vector<int> &arr, int n) {

    mS(arr, 0, n - 1);

}

void printArray(vector<int> &arr, int n) {

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    cout << endl;
}

int main() {

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Populate your array: ";
    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    mergeSort(arr, n);
    cout << "The sorted array is: ";
    printArray(arr, n);

    return 0;

}