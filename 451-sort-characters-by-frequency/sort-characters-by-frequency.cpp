class Solution {
public:
    string frequencySort(std::string s) {
        int n = s.length();
        
        // Step 1: Count frequency of each character
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }
        
        // Step 2: Create buckets where the index represents the frequency
        // Max possible frequency is n, so we need n + 1 buckets
        vector<vector<char>> buckets(n + 1);
        for (auto& p : freqMap) {
            char ch = p.first;
            int freq = p.second;
            buckets[freq].push_back(ch);
        }
        
        // Step 3: Reconstruct the string from highest frequency to lowest
        string result = "";
        for (int freq = n; freq >= 1; freq--) {
            if (buckets[freq].empty()) continue;
            
            // Core Addition: Sort characters within the same bucket alphabetically
            //sort(buckets[freq].begin(), buckets[freq].end());
            
            // Append characters to the result
            for (char ch : buckets[freq]) {
                result.append(freq, ch); 
            }
        }
        
        return result;
    }
};