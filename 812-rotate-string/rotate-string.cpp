class Solution {
public:
    bool rotateString(string s, string goal) {
        //Edge case -> If srings have unmatched length, they will never be isomorphic.
        if(s.length() != goal.length()) return false;

        //Loop -> Runs from start to end of either of the strings.
        for(int i = 0; i < s.length(); i++) {
            if(goal == s) return true;
            
            rotate(s.begin(), s.begin() + 1, s.end());
        }
        return false;
    }
};