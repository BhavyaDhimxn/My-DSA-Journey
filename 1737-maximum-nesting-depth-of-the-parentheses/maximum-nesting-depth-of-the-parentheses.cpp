class Solution {
public:

    /*
    OPTIMAL APPROACH:
    */
    int maxDepth(string s) {
        //initialise 2 variables 1. To store the count of parantheses 2. To store the maximum count.
        int count = 0, maximum = 0;
        
        //Loop -> Runs from 0 - last char in string.
        for(int i = 0; i < s.length(); i++) {
            //Increase count every time '(' is encountered
            //Store this count as a possible maximum count.
            if(s[i] == '(') {
                count++;
                maximum = max(maximum, count);
            }
            //Else if ')' encountered decrease the count.
            //If valid parentheses string -> Parenthesis always in pairs(even) -> will cancel each other.
            else if(s[i] == ')') count--;
            //If none of the above just continue through the loop. 
        }
        //Return the maximum value stored at the end.
        return maximum;
    }
};