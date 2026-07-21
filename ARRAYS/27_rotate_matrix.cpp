#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
BRUTE APPROACH
void rotate(vector<vector<int>>& matrix) {

    int n = matrix.size();

    vector<vector<int>> temp(n, vector<int>(n));

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            temp[j][n - 1 - 1] = matrix[i][j];

        }
    }

    matrix = temp;

}
*/

/*
OPTIMAL APPROACH
*/
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}

/**
 * Helper function to display the matrix in a grid format.
 */
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix (" << n * n << " total):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    printMatrix(matrix);

    // Perform rotation

    rotate(matrix);

    cout << "Matrix after 90-degree clockwise rotation:" << endl;
    printMatrix(matrix);

    return 0;
}
