class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) return s;

        vector<string> rows(min(numRows, int(s.length())));
        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c;
            // If we are at the top or bottom row, we reverse direction
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }
            // Move up or down depending on the current direction
            currentRow += goingDown ? 1 : -1;
        }

        string result = "";
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};