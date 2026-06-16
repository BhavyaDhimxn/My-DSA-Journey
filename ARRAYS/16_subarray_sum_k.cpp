#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

int longestSubarray(vector<int> &nums, int n, int k) {
    int len = 0;

    for(int i = 0; i < n; i++) {

        int sum = 0;

        for(int j = i; j < n; j++) {

            sum += nums[j];

            if(sum == k) {

                len = max(len, j - i + 1);

            }
        }

    }

    return len;
}
*/

/*
BETTER APPROACH:
*/
int longestSubarray(vector<int> &nums, int n, int k) {

    map<long long, int> mpp;
    long long sum = 0;
    int maxLen = 0;

    for(int i = 0; i < n; i++) {

        sum += nums[i];

        if(sum == k) {

            maxLen = max(maxLen, i + 1);

        }

        long long rem = sum - k;

        if(mpp.find(rem) != mpp.end()) {

            int len = i - mpp[rem];
            maxLen = max(maxLen, len);

        }

        if(mpp.find(sum) == mpp.end()) {

            mpp[sum] = i;

        }
    }

    return maxLen;

}


/*
OPTIMAL APPROACH:

int longestSubarray(vector<int> &nums, int n, int k) {

    int ans = 0;

    for(int i = 0; i < n; i++) {

        ans = ans^nums[i];

    }

    return ans;
}
*/

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

    cout << "The length of the longest subarray is: " << result << endl;
    
    return 0;

}