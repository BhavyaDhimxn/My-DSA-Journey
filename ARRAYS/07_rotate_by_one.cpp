#include<iostream>
using namespace std;

void rotateArray(vector<int> &nums, int n) {

    int temp = nums[0];

    for(int i = 1; i < n; i++) {

        nums[i - 1] = nums[i];

    }

    nums[n - 1] = temp;

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
    cout << "Enter the elements of your array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    rotateArray(nums,n);
    cout << "Rotated array is: ";
    printArray(nums, n);

    return 0;

}