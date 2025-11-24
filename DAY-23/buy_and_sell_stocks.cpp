#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int> &nums, int n) {
    
    int minimum = nums[0];
    int profit = 0;

    for(int i = 1; i < n; i++) {

        int cost = nums[i] - minimum;
        profit = max(profit, cost);
        minimum = min(minimum, nums[i]);

    }

    return profit;

}

int main() {

    int n;
    cout << "Enter the number of elemens: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    int result = maxProfit(nums, n);
    cout << "The maximum profit is: " << result << endl;
}