#include<iostream>
#include<vector>
using namespace std;

int floorArray(vector<int>& nums, int n, int x) {
    int low = 0,high = n - 1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(nums[mid] <= x) low = mid + 1;  
        else high = mid - 1;
    }
    return nums[high];
}

int ceilArray(vector<int>& nums, int n, int x) {
    int low = 0,high = n - 1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(nums[mid] >= x) high = mid - 1;  
        else low = mid + 1;
    }
    return nums[low];
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
    
    int result1 = floorArray(nums, n, x);
    int result2 = ceilArray(nums, n, x);
    cout << "The floor is: " << result1 << " & ceil is: " << result2 << endl;

    return 0;
}