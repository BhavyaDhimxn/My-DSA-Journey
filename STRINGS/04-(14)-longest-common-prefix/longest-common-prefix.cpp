class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Retrun an empty string if given vector is empty.
        if(strs.size() < 1) return "";

        //Sort the given vector lexographically.
        sort(strs.begin(), strs.end());
        //first string is the smallest and last string is the largest lexographically after sorting.
        string first = strs[0], last = strs[strs.size() - 1];
        //Take the length of the string with minimum length for the range of the loop.
        //No use of comparing after if one of the 2 strings is exhausted.
        int minimum = min(first.length(), last.length());

        //Loop -> traverse and compare the indexes of strings. If different return the substring till i.
        for(int i = 0; i < minimum; i++) {
            if(first[i] != last[i]) return first.substr(0, i);
        }
        return first.substr(0, minimum);
    }
};