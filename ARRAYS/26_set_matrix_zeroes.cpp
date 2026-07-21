#include <iostream>
#include <vector>

using namespace std;
/*
BETTER APPROACH
void setZeroes(vector<vector<int>>& matrix) {

    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(matrix[i][j] == 0) {

                row[i] = 1;
                col[j] = 1;

            }
        }
    }

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(row[i] == 1 || col[j] == 1) {

                matrix[i][j] = 0;

            }
        }
    }
}
*/

/*
OPTIMAL APPROACH
*/
void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return;
    int m = matrix[0].size();
    int col0 = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                if(j != 0) {
                    matrix[0][j] = 0;
                }
                else {
                    col0 = 0;
                }
            }
        }
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
        
    if(matrix[0][0] == 0){
        for(int j = 0; j < m; j++) matrix[0][j] = 0;
    }
        
    if(col0 == 0) {
        for(int i = 0; i < n; i++) matrix[i][0] = 0;
    }
}

int main() {
    
    int rows, cols;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    cout << "Enter the matrix elements line by line:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    setZeroes(matrix);
    
    cout << "\nModified Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}


    