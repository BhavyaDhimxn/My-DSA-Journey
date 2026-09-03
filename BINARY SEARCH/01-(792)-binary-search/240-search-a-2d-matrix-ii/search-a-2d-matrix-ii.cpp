class Solution {
public:
    /*
    BRUTE FORCE APPROACH:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == target) return true;
            }
        }
        return false;
    }
    */

    /*
    BETTER APPROACH:
    
    bool binarySearch(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] == target) return true;
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = false;

        for(int i = 0; i < n; i++) {
            if(matrix[i][m - 1] >= target) {
                ans = binarySearch(matrix[i], target);
                if(ans == true) return ans;
            } 
        }
        return ans;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int row = 0, col = m - 1;

        while(row < n && col >= 0) {
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) col--;
            else row++;
        }
        return false;
    }
    
};