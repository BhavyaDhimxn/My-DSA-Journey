#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

int majorityElement(vector<int> &nums, int n) {
    
    int count = 0;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(nums[i] == nums[j]) {

                count++;

            }

        }

        if(count > n/2) {

            return nums[i];
            
        }
    }

    return -1;
}
*/

/*
BETTER APPROACH:
*/
int majorityElement(vector<int> &nums, int n) {

    map<long long, int> mpp;

    for(int i = 0; i < n; i++) {

        mpp[nums[i]]++;

    }

    for(auto it : mpp) {

        if(it.second > n/2) {

            return it.first;
        }
    }

    return -1;

}


/*
OPTIMAL APPROACH:

int longestSubarray(vector<int> &nums, int n, int k) {

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

    int result = majorityElement(nums, n);

    cout << "The majority element is: " << result << endl;
    
    return 0;

}