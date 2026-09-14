class Solution {
public:

    /*
    BRUTE FORCE APPROACH:
   
    string reverseWords(string s) {
        //Declare a list(vector) of string data type to store non-space sequences(word).
        vector<string> words;
        //Declare an empty string word to get rid of all types of spaces.
        string word = "";

        //Loop to iterate over the given string.
        for(int i = 0; i < s.size(); i++) {
            //Add non-space char to word.
            if(s[i] != ' ') word += s[i];
            //If it is ' ', and word is not empty(to skip leading spaces), add to the list and reset for next word.
            else if(!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        //If last word is left, push it manually.
        if(!word.empty()) words.push_back(word);
        //Reverse the list to get our desired order.
        reverse(words.begin(), words.end());

        //Iterate over the reversed list and make a final result string with desired order.
        string result = "";
        
        for(int i = 0; i < words.size(); i++) {
            result += words[i];
            //If we have the last word, we dont need to add a ' ' after it.
            if(i < words.size() - 1) result += ' ';
        }
        //Return the final result.
        return result;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    string reverseWords(string s) {
        //Reverse the entire string before extraction(we will get correct order of words, just in reverse)
        reverse(s.begin(), s.end());
        //Initialise string result that stores final answer.
        string result = "";

        //Outer loop -> Each iteration is one word made and added to the result.
        for(int i = 0; i < s.length(); i++) {
            //Initialise strin word inside the outer loop as we need it to reset after every word.
            string word = "";

            //Inner loop -> To identify words, runs till the end of s and till " " is found.
            while(i < s.length() && s[i] != ' ') {
                word += s[i];
                //Increment i for every next char to be checked;
                i++;
            }
            //reverse the word.
            reverse(word.begin(), word.end());
            //Add a space and the word if there is a word(to skip leading spaces).
            if(!word.empty()) result += ' ' + word;
        }
        //Return the substring(1) of result as 1st char in result will always be a ' ', due to our logic in for loop, for addition of words to result.
        return result.substr(1);
    }
};