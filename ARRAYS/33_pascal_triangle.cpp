#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> answer;
    
    for(int i = 0; i < numRows; i++) {
        vector<int> ans;
        long long res = 1;
        ans.push_back(res);

        for(int j = 0; j < i; j++) {
            res *= i - j;
            res /= j + 1;
            ans.push_back(res);
        }

        answer.push_back(ans);
    }

    return answer;
}


int main() {

    int numRows;

    cout << "Enter the number of rows: ";
    cin >> numRows;

    vector<vector<int>> triangle = generate(numRows);


    for (int i = 0; i < triangle.size(); i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
