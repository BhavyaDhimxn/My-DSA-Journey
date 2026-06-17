#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BETTER APPROACH:

int maxiSum(vector<int> &nums, int n) {

    int maximum = INT_MIN;

    for(int i = 0; i < n; i++) {

        int sum = 0;

        for(int j = i; j < n; j++) {

            sum += nums[j];
            
            maximum = max(maximum, sum);

        }


    }

    return maximum;

}
*/

/*
OPTIMAL APPROACH:
*/
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



int main() {

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    int result = maxiSum(nums, n);

    cout << "The maximum subarray sum is: " << result << endl;
    
    return 0;

}