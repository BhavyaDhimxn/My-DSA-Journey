#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
BRUTE FORCE APPROACH:

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
*/

/*
OPTIMAL APPROACH:
*/
int lowerBound(vector<int> &nums, int n, int x) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(nums[mid] >= x) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int index = -1, maxCount = 0;

    for(int i = 0; i < n; i++) {
        int countOnes = m - lowerBound(matrix[i], m, 1);
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