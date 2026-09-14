class Solution {
public:
    /*
    OPTIMAL APPROACH:
    */
    string removeOuterParentheses(string s) {
        int n = s.length();
        int counter = 0;
        string ans;

        for(int i = 0; i < n; i++) {
            if(s[i] == ')') counter--;
            if(counter != 0) ans.push_back(s[i]);
            if(s[i] == '(') counter++;
        }
        return ans;
    }
};