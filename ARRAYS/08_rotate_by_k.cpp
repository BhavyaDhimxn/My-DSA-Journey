#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* 
BRUTE FORCE METHOD:

void rotateArray(vector<int> &nums, int n, int k) {

    k %= n;

    for(int i = 0; i < k; i++) {

        int var = nums[0];
        
        for(int j = 0; j < n - 1; j++) {

            nums[j] = nums[j + 1];

        }

        nums[n - 1] = var;

    }

}
*/

/*
BETTER - 1 APPROACH:

void rotateArray(vector<int> &nums, int n, int k) {

    k %= n;
    int temp[k];

    for(int i = 0; i < k; i++) {

       temp[i] = nums[i];

    }
    for(int i = k; i < n; i++) {

        nums[i - k] = nums[i];

    }
    for(int i = (n - k); i < n; i++) {

        nums[i] = temp[i - (n - k)];

    }

}
*/

/*
BETTER - 2 APPROACH:

void rotateArray(vector<int> &nums, int n, int k) {

    vector<int> temp(n);

    for(int i = 0; i < n; i++) {

        temp[(i + k) % n] = nums[i];

    }

    nums = temp;

}
*/

void rotateArray(vector<int> &nums, int n, int k) {

    k %= n;

    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());

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