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
    int minEatingSpeed(vector<int>& piles, int h) {

        int min = 1;
        int max = *max_element(piles.begin(), piles.end());

        while (min <= max) {
            long long int mid = min + (max - min) / 2;
            long long int hours = 0;
            for (int i = 0; i < piles.size(); i++) {
                hours += (piles[i] + mid - 1) / mid;
            }
            if (hours <= h) {
                max = mid - 1;
            }
            else {
                min = mid + 1;
            }
        }
        return min;
    }
};