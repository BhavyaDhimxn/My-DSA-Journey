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
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
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
        set<int> hashset;
        for(int j = i + 1; j < n; j++) {

            int third = -(nums[i] + nums[j]);
            if(hashset.find(third) != hashset.end()) {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);

        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
*/

/*
OPTIMAL APPROACH
*/
vector<vector<int>> threeSum(vector<int>& nums) {

    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {

        if(i > 0 && nums[i - 1] == nums[i]) continue;
        int j = i + 1;
        int k = n - 1;

        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) {
                j++;
            }
            else if(sum > 0) {
                k--;
            }
            else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j - 1] == nums[j]) j++;
                while(j < k && nums[k + 1] == nums[k]) k--;
            }
        } 
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    vector<vector<int>> result = threeSum(nums);

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
