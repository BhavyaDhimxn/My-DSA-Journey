class Solution {
private:
    // Helper function to check if a maximum sum target is feasible with k splits
    bool canSplit(vector<int>& nums, int k, int target_sum) {
        int subarray_count = 1;
        int current_sum = 0;

        for (int num : nums) {
            if (current_sum + num > target_sum) {
                // Start a new subarray
                subarray_count++;
                current_sum = num;
                
                // If we need more than k subarrays, this target is too small
                if (subarray_count > k) {
                    return false;
                }
            } else {
                current_sum += num;
            }
        }
        return true;
    }

public:
    int splitArray(std::vector<int>& nums, int k) {
        // low: The maximum element in the array
        int low = *std::max_element(nums.begin(), nums.end());
        
        // high: The sum of all elements in the array
        int high = std::accumulate(nums.begin(), nums.end(), 0);
        
        int result = high;

        // Binary search for the minimized maximum sum
        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevents potential integer overflow

            if (canSplit(nums, k, mid)) {
                result = mid;       // Target is achievable, try to find a smaller maximum
                high = mid - 1;
            } else {
                low = mid + 1;      // Target is too small, increase the allowed maximum
            }
        }

        return result;
    }
};