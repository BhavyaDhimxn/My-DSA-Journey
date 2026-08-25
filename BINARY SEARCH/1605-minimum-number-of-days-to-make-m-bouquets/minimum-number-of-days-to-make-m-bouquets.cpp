class Solution {
public:
    /*
    BRUTE FORCE APPROACH:

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int bouqetCount = 0;

        if((long long)m*k > n) return -1;
        for(int i = *min_element(bloomDay.begin(), bloomDay.end()); 
        i <= *max_element(bloomDay.begin(), bloomDay.end());
        i++) {
            int count = 0;
            int bouqetCount = 0;
            for(int j = 0; j < n; j++) {
                if(bloomDay[j] <= i) {
                    count++;
                    if(count == k) {
                        bouqetCount++;
                        count = 0;
                    }
                }
                else count = 0;
            }
            if(bouqetCount >= m) return i;
        }
        return - 1;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end()); 

        if((long long)m*k > n) return -1;
        while(low <= high) {
            long long mid = low + (high - low)/2;
            int count = 0, bouqetCount = 0;

            for(int i = 0; i < n; i++) {
                if(bloomDay[i] <= mid) {
                    count++;
                    if(count == k) {
                        bouqetCount++;
                        count = 0;
                    }
                }
                else count = 0;
            }

            if(bouqetCount >= m) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    } 
};