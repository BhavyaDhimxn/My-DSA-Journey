class Solution {
public:

    /*
    LINEAR SEARCH:

    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) return i;
            else if(nums[i] > target) return i;
        }
        return nums.size();
    }
    */

    /*
    BINARY SEARCH:
    */
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] >= target) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};