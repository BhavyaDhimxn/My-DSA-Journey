class Solution {
public:

    /*
    OPTIMAL APPROACH:
    */
    int romanToInt(string s) {
        //Declare an unordered map to store the symbols and their values.
        unordered_map<char, int> mp;
        //Store all the symbols and their values.
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        //Initialise a variable that stores the final answer.
        //Add the value of final char into it.
        int ans = mp[s[s.length() - 1]];

        //Loop -> Runs from second-last element to the first.
        for(int i = s.length() - 2; i >= 0; i--) {
            //Compare the current element i to next element i + 1.
            //If i is smaller -> subtract its value from ans.
            if(mp[s[i]] < mp[s[i + 1]]) ans -= mp[s[i]];
            //Else add its value to ans.
            else ans += mp[s[i]];
        }
        return ans;
    }
};