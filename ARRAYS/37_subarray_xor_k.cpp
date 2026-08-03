#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

int longestSubarray(vector<int> &nums, int n, int k) {
    int count = 0;

    for(int i = 0; i < n; i++) {

        int xr = 0;

        for(int j = i; j < n; j++) {

            xr ^= nums[j];

            if(xr == k) {

                count++;

            }
        }

    }

    return count;
}
*/

/*
OPTIMAL APPROACH:
*/

int longestSubarray(vector<int> &nums, int n, int k) {

    map<long long, int> mpp;
    long long xr = 0;
    int count = 0;
    mpp[xr]++;

    for(int i = 0; i < n; i++) {

        int x = xr^k;
        count += mpp[x];
        mpp[xr]++;
    }

    return count;

}

int main() {

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }
    
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = longestSubarray(nums, n, k);

    cout << "The number of subarrays are: " << result << endl;
    
    return 0;

}