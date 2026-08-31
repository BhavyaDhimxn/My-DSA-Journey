class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        /*
        BRUTE FORCE: 

        for(int i = 0; i < n; i++) {
            if(nums[i] == target) return i;
        }
        */
        
        /*
        OPTIMAL APPROACH:
        */
        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1; 
        }
        return -1;
    }
};