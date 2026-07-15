#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BETTER APPROACH:


bool ls(vector<int>& nums, int num) {
        
    int n = nums.size();

    for(int i = 0; i < n; i++) {

        if(nums[i] == num) return true;

    }

    return false;

}

int longestConSeq(vector<int> &nums, int n) {

    int longest = 1;
    int count = 0;
    int x;

    for(int i = 0; i < n; i++) {

        x = nums[i];
        count = 1;

        while(ls(nums, x + 1) == true) {

            x = x + 1;
            count+=1;

        }

        longest = max(longest,count);
    }

    return longest;

}
*/

/*
BETTER APPROACH
*/
int longestConSeq(vector<int> &nums, int n) {
    
    int longest = 1;
    int count = 0;
    int lastSmaller = INT_MIN;
    if(n == 0) return 0;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++) {

        if(nums[i] - 1 == lastSmaller) {

            count += 1;
            lastSmaller = nums[i];

        }
        else if(nums[i] != lastSmaller) {

            count = 1;
            lastSmaller = nums[i];

        }

        longest = max(longest,count);
    }

    return longest;

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

    int result = longestConSeq(nums, n);

    cout << "The length of longest consecutive sequence is: " << result << endl;
    
    return 0;

}