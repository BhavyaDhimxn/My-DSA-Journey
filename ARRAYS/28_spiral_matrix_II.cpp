#include <iostream>
#include <vector>
#include <iomanip> // Used to align the numbers neatly

using namespace std;

    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int left = 0, right = n - 1;
        int top = 0, bottom = n - 1;
        int count = 1;

        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                ans[top][i] = count++;
            }
            top++;
            for(int i = top; i <= bottom; i++) {
                ans[i][right] = count++;
            }
            right--;
            if(bottom >= top) {
                for(int i = right; i >= left; i--) {
                    ans[bottom][i] = count++;
                }
                bottom--;  
            }
        
            if(right >= left) {
                for(int i = bottom; i >= top; i--) {
                    ans[i][left] = count++;
                }
                left++;
            }
        }
        return ans;
    }


int main() {

    int n;
    cout << "Enter the matrix size (n): ";
    cin >> n;

    vector<vector<int>> result = generateMatrix(n);

    // 3. Print the generated spiral matrix
    cout << "\nGenerated " << n << "x" << n << " Spiral Matrix:\n" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            cout << setw(4) << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
