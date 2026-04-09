#include<iostream>
using namespace std;

vector<int> moveZeroes(vector<int> &nums, int n) {
    int  j = -1;
    for(int i = 0; i < n; i++) {

        if(nums[i] == 0) {

            j = i;
            break;

        }
    }
    for(int i = j + 1; i < n; i++) {

        if(nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

    return nums;

}

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    cout << "The moved array is: ";
    moveZeroes(nums, n);
    for(int x : nums) {
    cout << x << " ";
    }
    return 0;
}