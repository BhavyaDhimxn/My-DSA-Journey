#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int findMin(vector<int>& nums) { 
    int n = nums.size(); 
    int low = 0, high = n - 1; 
    int ans = INT_MAX, index = -1; 
    while(low <= high) { 
        int mid = (low + high)/2; 
        if(nums[low] <= nums[high]) { 
            if(ans > nums[low]) {
                ans = nums[low];
                index = low;
            }
            break; 
        } 
        if(nums[low] <= nums[mid]) { 
            if(ans > nums[low]) {
                ans = nums[low];
                index = low;
            } 
            low = mid + 1; 
        } else { 
            if(ans > nums[mid]) {
                ans = nums[mid];
                index = mid;
            } 
            high = mid - 1; 
        } 
    } 
    return index; 
} 


int main() {
    int n;
    cout << "Enter the number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    vector<int> nums(n);
    cout << "Enter the elements of the rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int min_val = findMin(nums);

    cout << "The number of rotations is: " << min_val << endl;

    return 0;
}
