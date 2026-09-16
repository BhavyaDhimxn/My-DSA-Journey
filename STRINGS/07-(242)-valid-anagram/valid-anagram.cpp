class Solution {
public:

    /*
    BRUTE FORCE APPROACH:
    
    bool isAnagram(string s, string t) {
        //Edge case -> If srings have unmatched length, they will never be anagram of each other.
        if(s.length() != t.length()) return false;
        //Sort both the strings.
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        //After sorting if both strings are unequal -> can't be anagrams
        if(s != t) return false;
        
        return true;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    bool isAnagram(string s, string t) {
        //Edge case -> If srings have unmatched length, they will never be anagram of each other.
        if(s.length() != t.length()) return false;
        //Create an integer array with length of number of alphabets, initialised with 0s.
        //To increment/decrement the number of occurance of an alphabet.
        int freq[26] = {0};

        //Loop -> from 0 to either of their lengths.
        //If anagram -> all elements in array will = 0. 
        //As equal number of individual alphabets cancel each other.
        for(int i = 0; i < s.length(); i++) {
            //Increment the index(ith alphabet) which has ith position in s.
            freq[s[i] - 'a']++;
            //decrement the index(ith alphabet) which has ith position in s.
            freq[t[i] - 'a']--;
        }
        //Iterate over the array to confirm.
        for(auto it : freq) {
            if(it != 0) return false;
        }
        return true;
    }
    
};