#include<iostream>
#include<algorithm>
using namespace std;

bool sortedArray(vector<int> &nums, int n){

    for(int i = 1; i < n; i++) {

        if(nums[i] < nums[i - 1]) {

            return false;

        }

    }

    return true;

}

int main() {

    vector<int> nums;
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    
    cout << "Enter the elements of your array: ";
    for(int i = 0; i < n; i++) {

        int x;
        cin >> x;
        nums.push_back(x);

    }
    
    int ans = sortedArray(nums, n);
    cout << "The array is sorted: " << ans; 

}