class Solution {
public:

    /*
    BRUTE FORCE APPROACH:

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        

        for(int i = 1; i <= *max_element(nums.begin(), nums.end()); i++) {
            int total = 0;

            for(int j = 0; j < n; j++) {
                total += (nums[j] + i - 1)/i;
            }
            if(total <= threshold) return i;
        }
        return -1;
    }
    */

    /*
    OPTIMAL APPROACH
    */
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end());

        while(low <= high) {
            int mid = low + (high - low)/2;
            long long total = 0;

            for(int i = 0; i < n; i++) {
                total += (nums[i] + mid - 1)/mid;
            }
            if(total <= threshold) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};