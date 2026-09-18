/*
class Solution {
public:

    
    BRUTE FORCE APPROACH:
    
    string longestPalindrome(string s) {
        //Create an empty string to store the final answer.
        string ans = "";

        //Outer Loop -> Runs through the entire string to build them from i to (n - 1).
        //Gives next loop the starting Char in each iteration.
        for(int i = 0; i < s.length(); i++) {
            //Create a temp string that stores all the substrings.
            string temp = "";
            //Inner Loop -> Runs from i to (n - 1) -> Generates all the substrings.
            for(int j = i; j < s.length(); j++) {
                //Stores all the substrings in each iteration.
                temp += s[j];
                //Create another string to store the reversed substring for later comparison
                string temp2 = temp;
                reverse(temp2.begin(), temp2.end());
                //Update the answer if temp is palindromic and greater in size.
                if(temp.length() > ans.length() && temp == temp2) ans = temp;
            }
        }
        return ans;
    }
};
*/

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0, max_len = 1;
        
        for (int i = 0; i < s.length(); ++i) {
            // Odd length palindrome (centered at i)
            expandAroundCenter(s, i, i, start, max_len);
            // Even length palindrome (centered between i and i+1)
            expandAroundCenter(s, i, i + 1, start, max_len);
        }
        
        return s.substr(start, max_len);
    }

private:
    // Helper function to expand around the center
    void expandAroundCenter(const string& s, int left, int right, int& start, int& max_len) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        
        // Update the start index and max length if a longer palindrome is found
        if (right - left - 1 > max_len) {
            start = left + 1;
            max_len = right - left - 1;
        }
    }
};