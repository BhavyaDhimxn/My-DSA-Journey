#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int maximumProfit(vector<int> &nums, int n) {

    int maxProfit = 0;
    int minimum = nums[0];

    for(int i = 1; i < n; i++) {

        int profit = nums[i] - minimum;
        maxProfit = max(maxProfit, profit);
        minimum = min(nums[i], minimum);

    }

    return maxProfit;

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

    int result = maximumProfit(nums, n);

    cout << "The maximum profit is: " << result << endl;
    
    return 0;

}