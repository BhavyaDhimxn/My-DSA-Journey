class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while(low <= high) {
            int mid = (low + high)/2;
            if(nums[mid] == target) return true;
            //Check for edge case -> nums[mid] = nums[low] = nums[high]:
            if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low = low + 1;
                high = high - 1;
                continue;
            }
            //If left half is sorted: when lowest element in <= element on mid
            if(nums[low] <= nums[mid]) {
                //Check if the target lies in this half.
                if(target <= nums[mid] && target >= nums[low]) high = mid - 1;
                else low = mid + 1;
            }
            //If right half is sorted: when element on mid + 1 <= highest element.
            else {
                //Check if the target lies in this half.
                if(target >= nums[mid] && target <= nums[high]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return false;
    }
};