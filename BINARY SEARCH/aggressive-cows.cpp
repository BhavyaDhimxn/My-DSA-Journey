#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canWePlace(vector<int> &nums, int minDist, int cows) {
    int n = nums.size();
    int cowCount = 1, lastCow = nums[0];

    for(int i = 1; i < n; i++) {
        if((nums[i] - lastCow) >= minDist) {
            cowCount++;
            lastCow = nums[i];
        }
        if(cowCount >= cows) return true;
    }
    return false;
}

int minMaxDist(vector<int> &nums, int cows) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ans = 0;
    for(int i = 1; i < (nums[n - 1] - nums[0]); i++) {
        if( canWePlace(nums, i, cows) == true) {
            ans = i;
            continue;
        }
        else break;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of stalls: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the positions of the stalls: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int cows;
    cout << "Enter the number of cows: ";
    cin >> cows;

    int result = minMaxDist(nums, cows);
    cout << "The maximum possible minimum distance is: " << result << endl;

    return 0;
}