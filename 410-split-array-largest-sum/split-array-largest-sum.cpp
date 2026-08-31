class Solution {
public:
    int splitCount(vector<int> &nums, int sum) {
        int split = 1, sumOfSplit = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(sumOfSplit + nums[i] <= sum) sumOfSplit += nums[i];
            else {
                split++;
                sumOfSplit = nums[i];
            }
        }
        return split;
    }

    /*
    BRUTE FORCE APPROACH:

    int splitArray(vector<int>& nums, int k) {
        long long maxi = accumulate(nums.begin(), nums.end(), 0);

        if(k > nums.size()) return -1;
        for(int i = *max_element(nums.begin(), nums.end()); i <= maxi; i++) {
            if(splitCount(nums, i) <= k) return i;
        }
        return -1;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        if(k > nums.size()) return -1;
        while(low <= high) {
            int mid = (low + high)/2;

            if(splitCount(nums, mid) <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};