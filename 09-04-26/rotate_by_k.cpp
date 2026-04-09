#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &nums, int n, int k) {

    vector<int> temp(n);

    for(int i = 0; i < n; i++) {

        temp[(i + k) % n] = nums[i];

    }

    nums = temp;

}

void printArray(vector<int> &nums, int n) {

    for(int i = 0; i < n; i++) {

        cout << nums[i] << " ";

    }

    cout << endl;

}

int main() {

    int n, k;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    cout <<  "Enter the key: ";
    cin >> k;

    rotateArray(nums, n, k);
    cout << "The rotated array is: ";
    printArray(nums, n);
    
    return 0;
}