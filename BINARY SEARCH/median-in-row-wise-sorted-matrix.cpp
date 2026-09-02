#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
BRUTE FORCE APPROACH:

int medianOfMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<int> temp;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            temp.push_back(mat[i][j]);
        }
    }
    sort(temp.begin(), temp.end());
    return temp[temp.size()/2];
}
*/

/*
OPTIMAL APPROACH:
*/
int upperBound(vector<int> &nums, int m, int x) {
    int low = 0, high = m - 1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(nums[mid] <= x) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int countLesserEqual(vector<vector<int>> &mat, int n , int m , int mid) {
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        count += upperBound(mat[i], m, mid);
    }
    return count;
}

int medianOfMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    int low = INT_MAX, high = INT_MIN;
    for(int i = 0; i < n; i++) {
        low = min(low, mat[i][0]);
        high = max(high, mat[i][m - 1]);
    }

    int req = (n*m)/2;
    while(low <= high) {
        int mid = (low + high)/2;
        int lesserEqual = countLesserEqual(mat, n , m , mid);
        if(lesserEqual <= req) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main() {
    vector<vector<int>> mat = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 7}
    };
    
    int median = medianOfMatrix(mat);
    
    cout << "The median element is: " << median << endl;
    
    return 0;
}