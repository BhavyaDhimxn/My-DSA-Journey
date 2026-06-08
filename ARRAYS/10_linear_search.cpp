#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &nums, int n, int k) {

    for(int i = 0; i < n; i++) {

        if(nums[i] == k) {

            return i;

        }

    }

    return -1;

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

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = linearSearch(nums, n, k);
    cout << "Your number is at index: " << result;

    return 0;
    
}