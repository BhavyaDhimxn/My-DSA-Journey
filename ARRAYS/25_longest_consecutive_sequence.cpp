#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BETTER APPROACH:
*/

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


/*
OPTIMAL APPROACH:

int maxiSum(vector<int> &nums, int n) {
    
    int sum = 0;
    int maximum = INT_MIN;

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

    int result = longestConSeq(nums, n);

    cout << "The length of longest consecutive sequence is: " << result << endl;
    
    return 0;

}