class Solution {
public:

    int startPosition(vector<int> &nums, int n, int target) {
        int start = -1, low = 0, high = n - 1;

        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] == target) {
                start = mid;
                high = mid - 1;
            }
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return start;
    }

    int endPosition(vector<int> &nums, int n, int target) {
        int end = -1, low = 0, high = n - 1;

        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] == target) {
                end = mid;
                low = mid+ 1;
            }
            else if(nums[mid] < target) low = mid+ 1;
            else high = mid - 1;
        }
        return end;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return {-1, -1};
        int start = startPosition(nums, n, target), end = endPosition(nums, n, target);
        if(start == -1) return {-1, -1}; 
        return {start, end};
    }
};