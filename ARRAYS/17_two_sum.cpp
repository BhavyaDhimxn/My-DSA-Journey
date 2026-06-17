#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

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
*/

/*
BETTER APPROACH:

vector<int> twoSum(vector<int> &nums, int n, int k) {

    map<int, int> mpp;

    for(int i = 0; i < n; i++) {

        int num = nums[i];
        int moreNeeded = k - num;

        if(mpp.find(moreNeeded) != mpp.end()) {

            return{mpp[moreNeeded], i};

        }

        mpp[num] = i;
        
    }

    return {-1, -1};

}
*/

/*
OPTIMAL APPROACH:
*/
vector<int> twoSum(vector<int> &nums, int n, int k) {

    int i= 0, j = n - 1;
    int sum = 0;
    
    std::sort(nums.begin(), nums.end());

    while(i < j) {
        
            sum = nums[i] + nums[j];

            if(sum < k) {

            i++;

        } 
        if(sum > k) {

            j--;

        } 
        if(sum == k) return {i , j};
        }


    return {-1, -1};

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

    vector<int> num = twoSum(nums, n, k);

    cout << "The length of the longest subarray is: ";
    for(int x : num) {
    cout << x << " ";
    }

    return 0;

}