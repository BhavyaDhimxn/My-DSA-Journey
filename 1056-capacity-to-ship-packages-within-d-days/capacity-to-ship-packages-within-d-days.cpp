class Solution {
public:

    /*
    BRUTE FORCE APPROACH:

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long maxi = accumulate(weights.begin(), weights.end(), 0);

        for(int i = *max_element(weights.begin(), weights.end()); i <= maxi; i++) {
            int day = 1, load = 0;

            for(int j = 0; j < n; j++) {
                if(load + weights[j] > i) {
                    load = weights[j];
                    day = day + 1;
                }
                else load += weights[j];
            }
            if(day <= days) return i;
        }
        return -1;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0);
        
        while(low <= high) {
            int mid = low + (high - low)/2;
            int day = 1; long long load = 0;

            for(int i = 0; i < n; i++) {
                if(load + weights[i] > mid) {
                    load = weights[i];
                    day = day + 1;
                }
                else load += weights[i];
            }
            if(day <= days) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};