#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

/*
BRUTE APPROACH
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
*/

/*
BETTER APPROACH
vector<vector<int>> threeSum(vector<int>& nums) {

    int n = nums.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {
            set<int> hashset;
            for(int k = j + 1; k < n; k++) {
                int sum = nums[i] + nums[j] + nums[k];

                int fourth = target - sum;
                if(hashset.find(third) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
*/

/*
OPTIMAL APPROACH
*/
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {
        if(i > 0 && nums[i - 1] == nums[i]) continue;

        for(int j = i + 1; j < n; j++) {
            if(j > i + 1 && nums[j - 1] == nums[j]) continue;
            int k = j + 1;
            int l = n - 1;

            while(k < l) {

                long long sum = nums[i] + nums[j];
                sum += nums[k];
                sum += nums[l];

                if(sum < target) {
                    k++;
                }
                else if(sum > target) {
                    l--;
                }
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k < l && nums[k - 1] == nums[k]) k++;
                    while(k < l && nums[l + 1] == nums[l]) l--;
                }
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int target;
    cout << "Enter your target: ";
    cin >> target;
    
    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    vector<vector<int>> result = fourSum(nums, target);

    cout << "Unique triplets that sum up to 0:" << endl;

    for (const auto& triplet : result) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i] << (i < triplet.size() - 1 ? ", " : "");
        }
        cout << "] " << endl;
    }

    return 0;
}