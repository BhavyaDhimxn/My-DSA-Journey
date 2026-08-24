class Solution {
public:
    /*
    BRUTE FORCE APPROACH: TLE

    int totalTime(vector<int>& piles, int hourly) {
        int time = 0;
        int n = piles.size();

        for(int i = 0; i < n; i++) {
            time += ceil((double)piles[i]/hourly);
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        for(int i = 1; i <= *max_element(piles.begin(), piles.end()); i++) {
            int requiredTime = totalTime(piles, i);
            if(requiredTime <= h) return i;
        }
        return -1;
    }
    */

    /*
    OPTIMAL APPROACH:
    */

    long long totalTime(vector<int>& piles, long long hourly) {
        long long time = 0;
        int n = piles.size();

        for(int i = 0; i < n; i++) {
            time += ceil((double)piles[i]/hourly);
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());

        while(low <= high) {
            long long mid = (low + high)/2;

            if(totalTime(piles, mid) <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};