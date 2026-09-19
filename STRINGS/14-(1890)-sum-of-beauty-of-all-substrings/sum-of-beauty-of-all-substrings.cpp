class Solution {
public:

    /*
    OPTIMAL APPROACH:
    */
    int beautySum(string s) {
        //Initialise a variable to store the total sum of beauty with 0;
        int totalBeauty = 0;

        //Outer Loop -> Runs from 0 to (n - 1). Sets the 1st element of each substring.
        for(int i = 0; i < s.length(); i++) {
            //Create an unordered map to store each element and its frequency.
            //Inside outer loop -> Resets for every iteration.
            unordered_map<char, int> mp;
            //Inner Loop -> Runs from i to (n - 1).
            //Generates each substring and stores total beauty.
            for(int j = i; j < s.length(); j++) {
                //Update the map with element and its frequency.
                mp[s[j]]++;

                //Create 2 variables storing the minimum and maximum occurances.
                int minimum = INT_MAX, maximum = INT_MIN;

                //Run a loop through the map in this iteration(substring) and get max, min.
                for(auto it : mp) {
                    minimum = min(minimum, it.second);
                    maximum = max(maximum, it.second);
                }

                //After getting max min for this substring, add it to total beauty.
                totalBeauty += (maximum - minimum);
            }
        }
        return totalBeauty;
    }
};