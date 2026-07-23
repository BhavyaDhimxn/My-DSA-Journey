#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int indexElement(int row, int col) {

    long long result = 1;

    for(int i = 0; i < col; i++) {

        result *= (row - i);
        result /= i + 1;

    }

    return result;
}

int main() {

    int row , col;
    cout << "Enter the row number: ";
    cin >> row;

    cout << "Enter the column number: ";
    cin >> col;

    int ans = indexElement(row - 1, col - 1);
    cout << "The element at row: " << row << " and column: " << col << " is: " << ans << endl;

    return 0;
    
}