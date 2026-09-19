/*
BRUTE FORCE APPROACH:

class Solution {
public:
    string longestPalindrome(string s) {
        //Create an empty string that will store the final answer.
        string answer = "";
        //Initialise a variable with length of string.
        int n = s.length();

        //Outer Loop -> Gives the starting index of a substring.
        for(int i = 0; i < n; i++) {
            //Create a temporary string that stores all the substrings.
            //Inside the outer loop as it has to reset every time to store unique substring.
            string temp = "";
            
            //Inner Loop -> Generates all the substrings -> runs the main logic/check for each substring.
            for(int j = i; j < n; j++) {
                //Store the jthChar in temp to generate substrings.
                temp += s[j];
                //Create another dummy string to reverse temp for further comparison.
                string temp2 = temp;
                reverse(temp2.begin(), temp2.end());

                //Update answer if longer string is found and it is palindromic.
                if(temp.length() > answer.length() && temp == temp2) {
                    answer = temp;
                }
            }
        }
        //Return the final updated answer.
        return answer;
    }
};
*/

/*
OPTIMAL APPROACH:
*/
class Solution {
public:
    string longestPalindrome(string s) {
        //Initialise a variable with length of string.
        int n = s.length();
        
        //Return sitself if size is = 1.
        if(n == 1) return s;
        //Create 2 variables 1. Stores the starting index of substring. 2. Stores the max length of string.
        int start = 0, maxLength = 1;

        //Main Loop -> Runs from 0 to (n - 1).
        for(int i = 0; i < n; i++) {

            //Call the expanding funtion for odd length. 1 centre.
            expandFromCentre(s, i, i, start, maxLength);
            //Call the expanding funtion for even length. Centre between 2 indices.
            expandFromCentre(s, i, i + 1, start, maxLength);
        }
        //Return the substring which starts from start and has length = maxLength.
        return s.substr(start, maxLength);
    }

private:
    //Create a helper void function which updates the start and maxLength.
    void expandFromCentre(string& s, int left, int right, int& start, int& maxLength) {
        //Run a loop to increment pointer while we are in bounds and left element = right one.
        //Sets the range to be a palindromic substring.
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }

        //Update start and maxLength if the length is greater.
        if((right - left - 1) > maxLength) {
            maxLength = right - left - 1;
            start = left + 1;
        }
    }
};


