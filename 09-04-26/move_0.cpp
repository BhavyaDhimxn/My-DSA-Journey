#include<iostream>
using namespace std;

vector<int> moveZeroes(vector<int> &nums, int n) {

    vector<int> temp;

    for(int i = 0; i < n; i++) {

        if(nums[i] != 0) {

            temp.push_back(nums[i]);

        }

    }

    for(int i = 0; i < temp.size(); i++) {

        nums[i] = temp[i];

    }

    for(int i = temp.size(); i < n; i++) {

        nums[i] = 0;

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