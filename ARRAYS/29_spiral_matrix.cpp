#include <iostream>
#include <vector>

using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if (matrix.empty() || matrix[0].empty()) return {};

        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0, right = m - 1;
        int top = 0, bottom = n - 1;

        vector<int> ans;
        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(bottom >= top) {
                for(int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;  
            }
        
            if(right >= left) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;

    
    cout << "Enter number of columns: ";
    cin >> cols; 

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "\nEnter the elements row by row:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    cout << "\nSpiral Order Traversal Array:\n[ ";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;

    return 0;
}
