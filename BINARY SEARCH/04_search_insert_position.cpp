#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while(low <= high) {

        int mid = (low + high)/2;

        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;

    }

    return low;
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
    
    int result = searchInsert(nums, x);
    cout << "The position is: " << result << endl;

    return 0;
}
