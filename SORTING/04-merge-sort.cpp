#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums, int low, int high, int mid) {
    //Create 2 pointers 
    //1. left points at 1st element of left half
    //2. right point at 1st element of right half.
    int left = low, right = mid + 1;
    //Create a temporary vector in which elemts will be inserted in a sorted manner.
    vector<int> temp;

    //Run a loop while both pointers do not cross their last indices.
    while(left <= mid && right <= high) {
        //If left elemnt is smaller insert it and increment the left pointer.
        if(nums[left] < nums[right]) {
            temp.push_back(nums[left]);
            left++;
        }
        //else insert the right element and incremenet right pointer.
        else {
            temp.push_back(nums[right]);
            right++;
        }
    }
    //Run a loop for inserting elements from the left half if right is exhausted.
    while(left <= mid) {
        temp.push_back(nums[left]);
        left++;
    }
    //Run a loop for inserting elements from the right half if left is exhausted.
    while(right <= high) {
        temp.push_back(nums[right]);
        right++;
    }
    //Run a loop to put all the sorted elements back into the original vector.
    for(int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &nums, int low, int high) {
    //return if only one element is left -> Can't be split and is sorted.
    if(low >= high) return;
    //Find mid to split the vector into 2 halves.
    int mid = (low + high)/2;
    //Left split to be further split and merged.
    mergeSort(nums, low, mid);
    //Right split to be further split and merged.
    mergeSort(nums, mid + 1, high);
    //Merge when no more splitting takes place.
    merge(nums, low, high, mid);
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