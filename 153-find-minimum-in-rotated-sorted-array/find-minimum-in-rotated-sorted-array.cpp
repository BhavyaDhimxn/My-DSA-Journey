class Solution {
public:

    /*
    BRUTE FORCE APPROACH: LINEAR SEARCH
    */

    /*
    OPTIMAL APPROACH:
    */
    int findMin(vector<int>& nums) {
        //Initialise the two pointers of BS.
        int low = 0, high = nums.size() - 1;
        //Initialise a variable with MAX value(as we want the minimum during comparison) that has the final ans.
        int ans = INT_MAX;

        while(low <= high) {
            //Initialise the mid index.
            int mid = (low + high)/2;

            //Check if left half is sorted.
            if(nums[low] <= nums[mid]) {
                //Store the minimum by comparing the smallest among ans and lowest element.
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            //Check if right half is sorted.
            else {
                //Store the minimum by comparing the smallest among ans and lowest element.
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans; 
    }
};