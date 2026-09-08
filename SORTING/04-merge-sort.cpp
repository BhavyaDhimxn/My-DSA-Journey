#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int high, int mid) {
    //1st element of left half.
    int left = low;
    //1st element of right half.
    int right = mid + 1;
    //Declare temp to store sorted array.
    vector<int> temp;

    //Compare & push elements from both halves into temp, till one of the halves is exhausted.
    while(left <= mid && right <= high) {
        if(arr[left] < arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    //Push all the elements of left if right exhausted.
    while(left <= mid) temp.push_back(arr[left++]);
    //Push all the elements of right if left exhausted.
    while(right <= high) temp.push_back(arr[right++]);

    //Put the sorted elements into original array.
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    //Base condition: split till only 1 element per array is left.
    if(low >= high) return;
    //To split array in half.
    int mid = (low + high)/2;
    //Sort the left half.
    mergeSort(arr, low, mid);
    //Sort the right half.
    mergeSort(arr, mid + 1, high);
    //Merge the halves in sorted manner.
    merge(arr, low, high, mid);
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

    mergeSort(arr, 0, n - 1);
    cout << "The sorted array is: ";
    printArray(arr, n);

    return 0;

}