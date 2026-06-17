#include<iostream>
#include<vector>
using namespace std;

/*
BRUTE FORCE APPROACH
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

void Sort(vector<int> &arr, int n) {

    mS(arr, 0, n - 1);

}
*/

/*
BETTER APPROACH
*/
void Sort(vector<int> &arr, int n) {

    int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0) cnt_0++;
        else if(arr[i] == 1) cnt_1++;
        else cnt_2++;

    }
    for(int i = 0; i < cnt_0; i++) arr[i] = 0;
    for(int i = cnt_0; i < cnt_0 + cnt_1; i++) arr[i] = 1;
    for(int i = cnt_0 + cnt_1; i < n; i++) arr[i] = 2;   

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

    Sort(arr, n);
    cout << "The sorted array is: ";
    printArray(arr, n);

    return 0;

}