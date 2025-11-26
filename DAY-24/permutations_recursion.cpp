#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(0, nums, result);
        return result;
    }
    
private:
    void backtrack(int index, vector<int>& nums, vector<vector<int>>& result) {
        // If we've fixed positions [0..index-1], and index == size,
        // we have a complete permutation
        if (index == (int)nums.size()) {
            result.push_back(nums);
            return;
        }
        
        // Try putting every remaining element at position `index`
        for (int i = index; i < (int)nums.size(); ++i) {
            // Swap current element to the current "fixed" position
            swap(nums[index], nums[i]);
            
            // Recurse for the next position
            backtrack(index + 1, nums, result);
            
            // Backtrack: undo the swap
            swap(nums[index], nums[i]);
        }
    }
};
