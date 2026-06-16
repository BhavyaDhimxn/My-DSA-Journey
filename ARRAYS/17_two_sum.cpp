#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:
*/
vector<int> twoSum(vector<int> &nums, int n, int k) {
    
    int sum = 0;

    for(int i = 0; i < n; i++) {

        
        for(int j = i + 1; j < n; j++) {

            sum = nums[i] + nums[j];

            if(sum == k) {

                return {i, j};

            }
        }

    }

    return {-1, -1};
}


/*
BETTER APPROACH:

int twoSum(vector<int> &nums, int n, int k) {

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
*/

/*
OPTIMAL APPROACH:

int twoSum(vector<int> &nums, int n, int k) {

    int i, j = 0;
    int maxLen = 0;
    long long sum = nums[0];

    while(j < n) {
        
        while(i <= j && sum > k) {

            sum -= nums[i];
            i++;

        }

        if(sum == k) {

            maxLen = max(maxLen, j - i + 1);

        } 
        j++;
        if(j < n) sum += nums[j];

    }

    return maxLen;
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

    vector<int> num = twoSum(nums, n, k);

    cout << "The length of the longest subarray is: ";
    for(int x : num) {
    cout << x << " ";
    }

    return 0;

}