class Solution {
public:

    /*
    BRUTE FORCE APPROACH:
    */
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s != t) return false;
        // for(int i = 0; i < s.length(); i++) {
        //     freq[s[i] - 'a']++;
        //     freq[t[i] - 'a']--;
        // }
        // for(auto it : freq) {
        //     if(it != 0) return false;
        // }
        return true;
    }
    /*
    OPTIMAL APPROACH:

    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(auto it : freq) {
            if(it != 0) return false;
        }
        return true;
    }
    */
};