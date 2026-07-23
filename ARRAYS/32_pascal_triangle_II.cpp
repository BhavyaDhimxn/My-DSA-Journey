#include <iostream>
#include <vector>

using namespace std;


int indexElement(int row, int col) {
    long long result = 1;
    for(int i = 0; i < col; i++) {
        result *= (row - i);
        result /= i + 1;
    }
    return result;
}

vector<int> getRow(int rowIndex) {
    vector<int> ans;
    for(int i = 0; i <= rowIndex; i++) {
        ans.push_back(indexElement(rowIndex, i));
    }
    return ans;
}


int main() {

    int rowIndex;

    cout << "Enter the row index (0-indexed): ";
    cin >> rowIndex;

    vector<int> row = getRow(rowIndex);

    cout << "Row " << rowIndex << ": [";
    for (size_t i = 0; i < row.size(); i++) {
        cout << row[i];
        if (i < row.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
