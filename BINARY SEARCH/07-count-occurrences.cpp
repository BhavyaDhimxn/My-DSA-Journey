#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int startPosition(vector<int> &nums, int n, int target) {
    int start = -1, low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(nums[mid] == target) {
            start = mid;
            high = mid - 1;
        }
        else if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return start;
}

int endPosition(vector<int> &nums, int n, int target) {
    int end = -1, low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(nums[mid] == target) {
            end = mid;
            low = mid+ 1;
        }
        else if(nums[mid] < target) low = mid+ 1;
        else high = mid - 1;
    }
    return end;
}

int searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    if (n == 0) return 0;
    int start = startPosition(nums, n, target), end = endPosition(nums, n, target);
    if(start == -1) return 0; 
    return (end - start) + 1;
}


int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the sorted elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target element to count: ";
    cin >> target;

    int totalCount = searchRange(nums, target);

    cout << "The element " << target << " appears " << totalCount << " time(s) in the array." << endl;

    return 0;
}