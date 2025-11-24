#include<iostream>
#include<vector>
using namespace std;

long long maxSubarraySum(vector<int> &nums, int n) {

    long long maximum = LONG_MIN, sum = 0;

    for(int i = 0; i < n; i++) {

        sum += nums[i];

        if(sum > maximum) {

            maximum = sum;

        }

        if(sum < 0) {

            sum = 0;

        }

    }

    return maximum;

}

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        
        cin >> nums[i];

    }

    long long result = maxSubarraySum(nums, n);
    cout << "Maximum subarray sum is: " << result << endl;
}