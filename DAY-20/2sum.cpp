#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> & nums, int n, int target) {
    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {

        if(mp.find(target - nums[i]) != mp.end()) {

            return {mp[target - nums[i]], i};

        } else {

            mp[nums[i]] = i;
        }

    }

    return {};

}

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = twoSum(nums, n, target);
    if(!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << " are: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}