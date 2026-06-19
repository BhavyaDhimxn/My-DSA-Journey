#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH

vector<int> leaders(vector<int> &nums, int n) {

        vector<int> ans;
        
        for(int i = 0; i < n; i++) {
            
            bool leader = true;

            for(int j = i + 1; j < n; j++) {

                if(nums[i] < nums[j]) {
                    
                    leader = false;
                    break;

                }

            }
            
            if(leader == true) ans.push_back(nums[i]);
            
        }

        return ans;
 
}
*/

/*
OPTIMAL APPROACH
*/
vector<int> leaders(vector<int> &nums, int n) {

        vector<int> ans;
        int maximum = INT_MIN;

        for(int i = n - 1; i >= 0; i--) {

            if(nums[i] > maximum) {

                ans.push_back(nums[i]);

            }

            maximum = max(maximum, nums[i]);
            
            
        }

        return ans;
 
}

int main() {

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    vector<int> num = leaders(nums, n);

    cout << "The leaders are: ";
    for(int x : num) {
    cout << x << " ";
    }

    return 0;

}