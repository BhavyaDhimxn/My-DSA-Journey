#include<iostream>
#include<vector>
using namespace std;

/*
LINEAR SEARCH

int lowerBound(vector<int>& nums, int n, int x) {
    for(int i = 0; i < n; i++) {
        if(nums[i] >= x) return i;
    }
    return n;
}
*/

/*
BINARY SEARCH
*/
int lowerBound(vector<int>& nums, int n, int x) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(nums[mid] >= x) high = mid - 1;
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
    
    int result = lowerBound(nums, n, x);
    cout << "The lower Bound is: " << result << endl;

    return 0;
}