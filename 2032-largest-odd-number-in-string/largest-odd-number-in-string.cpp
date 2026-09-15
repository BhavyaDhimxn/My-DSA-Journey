class Solution {
public:
    string largestOddNumber(string num) {
        //Iterate over the string from the last.
        //If an odd number is found -> substring from 0 to that element will be the largest odd number always.
        for(int i = (num.length() - 1); i >= 0; i--) {
            //Each element is a string. To use '%' -> convert by subtracting ascii '0'.
            //substr(start, length)
            if((num[i] - '0') % 2 != 0) return num.substr(0, i + 1);
        }
        return "";
    }
};