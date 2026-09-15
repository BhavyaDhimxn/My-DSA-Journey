class Solution {
public:

    /*
    BRUTE FORCE APPROACH: LINEAR SEARCH
    */

    /* 
    OPTIMAL APPROACH
    */
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while(low <= high) {
            int mid = (low + high)/2;

            //Return it if found.
            if(nums[mid] == target) return mid;
            //Check if left half is sorted.
            if(nums[low] <= nums[mid]) {
                //Check if the element exists in this half.
                if(target <= nums[mid] && target >= nums[low]) high = mid - 1;
                else low = mid + 1;
            }
            //Check if right half is sorted.
            else {
                //Check if the element exists in this half.
                if(target <= nums[high] && target >= nums[mid]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};