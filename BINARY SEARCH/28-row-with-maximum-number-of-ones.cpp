#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int index = -1, maxCount = 0;

    for(int i = 0; i < n; i++) {
        int countOnes = 0;
        for(int j = 0; j < m; j++) {
            countOnes += matrix[i][j];
        }
        if(countOnes > maxCount){
            maxCount = countOnes;
            index = i;
        }
    }
    return index;
}

int main() {
    int n, m;
    cout << "Enter the number of rows (n) and columns (m): ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter the matrix elements (0s and 1s) row by row:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int result = rowWithMax1s(matrix, n, m);

    if(result != -1) {
        cout << "The row with the maximum number of 1s is row index: " << result << endl;
    } else {
        cout << "No 1s found in the entire matrix." << endl;
    }

    return 0;
}