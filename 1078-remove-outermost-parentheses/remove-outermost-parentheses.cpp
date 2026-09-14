class Solution {
public:
    /*
    OPTIMAL APPROACH:
    */
    string removeOuterParentheses(string s) {
        //Initialise a variable with length of string(to use in loop).
        int n = s.length();
        //Initialise a variable with 0(when count = 0 -> outermost parentheses)to keep count in every iteration.
        int count = 0;
        //Declare an empty string to store final answer.
        string ans = "";

        //Loop to iterate over every element in string and update ans.
        for(int i = 0; i < n; i++) {
            //Check for ")" first. If true decrease count.
            //Case: "(" checked first and it is true. If it happens to be outermost parentheses, count will be ++ and it will get included in the answer.
            if(s[i] == ')') count--;
            //Check for count number. Whenever count is non zero -> element added.
            if(count != 0) ans += s[i];
            //Check for "(". If true increase count.
            if(s[i] == '(') count++;
        }
        //Return the update string stored in ans.
        return ans;
    }
};