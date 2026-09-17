class Solution {
public:

    /*
    OPTIMAL APPROACH:
    */
    string frequencySort(string s) {
        //Create a map to store the char and its frequency.
        //Stores ony the chars and freq of chars in string(k unique characters). 
        unordered_map<char, int> mp;

        //Loop -> Runs on the entire string.
        for(auto ch : s) {
            //Increments freq for each char.
            mp[ch]++;
        }

        //Create buckets(vector(vectors(chars))) of size n + 1.
        //A char can occur as many as n times -> so size of vector will be n + 1 -> so we have indices till n.
        //stores characters at an index which is their freq.
        vector<vector<char>> buckets(s.length() + 1);
        //Iterate over mp and push the chars in buckets at their freq.
        for(auto& [ch, freq] : mp) {
            buckets[freq].push_back(ch);
        }

        //Create a string to store the result.
        string result = "";
        //Loop -> Runs from last(most freq) to 1(minimum occurance).
        for(int i = s.length(); i >= 1; i--) {
            //If we have a char array stored in that index, we run a loop to append it.
            if(!buckets[i].empty()) {
                for(auto ch : buckets[i]) result.append(i, ch);
            }
        }
        return result;
    }
};
/*
BRUTE FORCE APPROACH:

private:
    //Create a Comparator function.
    static bool customComp(pair<char, int>& a, pair<char, int>& b) {
        //returns true or false based on the condition of frequency comparison.
        return a.second > b.second;
    }

public:
    string frequencySort(string s) {
        //Create a map to store the char and its frequency.
        //Stores ony the chars and freq of chars in string(k unique characters). 
        unordered_map<char, int> mp;

        //Loop -> Runs on the entire string.
        for(auto ch : s) {
            //Increments freq for each char.
            mp[ch]++;
        }

        //Create a vector to store these pairs.
        //Unordered map does not maintain any order so cant sort in it.
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        //Sort the pairs according to their freq using sort and comparater function.
        sort(vec.begin(), vec.end(), customComp);

        //Create a string to store the result.
        string result = "";
        //Loop -> runs through vec and appends in result in sorted manner.
        for(auto& [ch, freq] : vec) {
            result.append(freq, ch);
        }
        return result;
    }
};
*/