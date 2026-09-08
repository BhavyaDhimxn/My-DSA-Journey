#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> &nums, int low, int high) {
    //i & j -> pointers used for swapping and ultimately stopping at the boundaries of pivot index.
    int i = low, j = high;
    //Pivot can be any element.
    int pivot = nums[low];

    //Loop runs till the split has more than one element.
    while(i < j) {
        //Moves pointer forward while encoutering elements <= pivot element | Stops pointer at an element > pivot. 
        while(nums[i] <= pivot && i < high) i++;
        //Moves pointer backward while encoutering elements > pivot element | Stops pointer at an element < pivot. 
        while(nums[j] > pivot && j > low) j--;
        //Swaps so that smaller/equal element comes on left and greater element comes on right of pivot.
        if(i < j) swap(nums[i], nums[j]);
    }
    //When i > j, j points to the index of last element <= pivot, therefor the original pivot index can now be the correct one.
    swap(nums[low], nums[j]);
    //Return the correct index of that element after placing it correctly.
    return j;
}

void quickSort(vector<int> &nums, int low, int high) {
    //recursive function will work till high > low.
    if(low < high) {
        //Store the value of the partition index for further use.
        int partitionIndex = partition(nums, low, high);

        //Sort the left half befor partition.
        quickSort(nums, low, partitionIndex - 1);
        //Sort the right half after partition.
        quickSort(nums, partitionIndex + 1, high);
    }
}

void printArray(vector<int> &nums, int n) {
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main() {

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    quickSort(nums, 0, n - 1);
    cout << "The sorted array is: ";
    printArray(nums, n);

    return 0; 

}