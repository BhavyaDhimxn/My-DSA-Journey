class Solution {
public:

    /*
    BRUTE FORCE APPROACH:
    */
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
};