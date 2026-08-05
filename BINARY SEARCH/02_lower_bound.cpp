#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>& nums, int n, int x) {

    for(int i = 0; i < n; i++) {

        if(nums[i] >= x) return i;

    }

    return n;
}

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int x;
    cout << "Enter the target: ";
    cin >> x;

    int result = lowerBound(nums, n, x);
    cout << "The lower Bound is: " << result << endl;

    return 0;
}