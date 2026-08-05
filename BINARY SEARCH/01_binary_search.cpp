#include <iostream>
#include <vector>

using namespace std;


int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }

    return -1;
}


int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target element to search for: ";
    cin >> target;

    int result = search(nums, target);

    if (result != -1) {
        cout << "Target " << target << " found at index: " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array (returned -1)." << endl;
    }

    return 0;
}
