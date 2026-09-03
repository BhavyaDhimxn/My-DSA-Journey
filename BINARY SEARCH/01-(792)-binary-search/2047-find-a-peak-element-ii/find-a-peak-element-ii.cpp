class Solution {
public:

    /*
    BRUTE FORCE APPROACH:

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int left = (j - 1) >= 0 ?  mat[i][j - 1] : -1;
                int right = (j + 1) < m ?  mat[i][j + 1] : -1;
                int top = (i - 1) >= 0 ?  mat[i - 1][j] : -1;
                int bottom = (i + 1) < n ?  mat[i + 1][j] : -1;

                if(mat[i][j] > left && mat[i][j] > right && mat[i][j] > top && mat[i][j] > bottom) return {i, j};
            }
        }
        return {-1, -1};
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    int maxElementRowIndex(vector<vector<int>> &nums, int n, int col) {
        int maxElement = -1;
        int index = -1;

        for(int i = 0; i < n; i++) {
            if(nums[i][col] > maxElement) {
                maxElement = nums[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;

        while(low <= high) {
            int mid = (low + high)/2;
            int maxRow = maxElementRowIndex(mat, n, mid);
            int left = (mid - 1) >= 0 ? mat[maxRow][mid - 1] : -1;
            int right = (mid + 1) < m ? mat[maxRow][mid + 1] : -1;

            if(mat[maxRow][mid] > left && mat[maxRow][mid] > right) return {maxRow, mid};
            else if(mat[maxRow][mid] < left) high = mid - 1;
            else low = mid + 1;
        }
        return {-1, -1};
    }
};