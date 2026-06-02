#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> &nums, int low, int high) {

    int pivot = nums[low];
    int i = low;
    int j = high;

    while(j > i) {

        while(nums[i] <= pivot && i < high){

            i++;

        }
         while(nums[j] > pivot && j > low){

            j--;

        }

        if(i < j) swap(nums[i], nums[j]);

    }

    swap(nums[low], nums[j]);
    return j;

}

void quickSort(vector<int> &nums, int low, int high) {

    if(low < high) {

        int pIndex  = partition(nums, low, high);
        quickSort(nums, low, pIndex - 1);
        quickSort(nums, pIndex + 1, high);

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