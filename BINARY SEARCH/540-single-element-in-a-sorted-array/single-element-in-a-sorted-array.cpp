class Solution {
public:

    /*
    BRUTE FORCE APPROACH:

    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n - 1] != nums[n - 2]) return nums[n - 1];

        for(int i = 1; i < n - 1; i++) {
            if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) return nums[i];
        }
        return -1;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 1, high = n - 2;

        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n - 1] != nums[n - 2]) return nums[n - 1];

        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }
            if((mid%2 == 1 && nums[mid] == nums[mid - 1]) || (mid%2 == 0 && nums[mid] == nums[mid + 1])) low = mid + 1;
            else high = mid - 1;  
        }
        return -1;
    }
};