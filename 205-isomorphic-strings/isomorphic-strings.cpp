class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //Edge case -> If srings have unmatched length, they will never be isomorphic.
        if(s.length() != t.length()) return false;

        //Create 2 char maps one for each string and initialise all elements with 0.
        char mapS[256] = {0};
        char mapT[256] = {0};

        //Loop -> Runs from start to end of either of the strings.
        for(int i = 0; i < s.length(); i++) {
            //Check if the value at index where ith indices of both strings matches.
            //If they match it means we have encountered the pair and just continue.
            //Correct pairs will always have the same value in their respective maps.
            if(mapS[s[i]] != mapT[t[i]]) return false;
            //Update value.
            mapS[s[i]] = i + 1;
            mapT[t[i]] = i + 1;
        }
        return true;
    }
};