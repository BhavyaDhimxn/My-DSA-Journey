#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
BRUTE APPROACH
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());

    for(int i = 0; i < n; i++) {

        int start = intervals[i][0];
        int end = intervals[i][1];

        if(!ans.empty() && start <= ans.back()[1]) continue;

        for(int j = i + 1; j < n; j++) {

            if(intervals[j][0] <= end) {
                end = max(end, intervals[j][1]);
            }
            else {
                break;
            }
        }

        ans.push_back({start, end});
    }

    return ans; 
}
*/

/*
OPTIMAL APPROACH
*/
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());

    for(int i = 0; i < n; i++) {

        if(ans.empty() || ans.back()[1] < intervals[i][0]) {

            ans.push_back(intervals[i]);

        }
        else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }

    return ans; 

}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter each interval as 'start end' (separated by space):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Interval " << i + 1 << ": ";
        cin >> intervals[i][0] >> intervals[i][1];
    }
    
    vector<vector<int>> result = merge(intervals);

    // Print the merged intervals
    cout << "\nMerged Intervals: " << endl;
    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "[" << result[i][0] << "," << result[i][1] << "]";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
