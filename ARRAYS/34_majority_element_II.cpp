#include <iostream>
#include <vector>
#include<map>
using namespace std;

/*
BRUTE FORCE APPROACH

vector<int> majorityElement(vector<int>& nums) {         
    int n = nums.size();         
    vector<int> ans;          
    
    for(int i = 0; i < n; i++) {              
        if(ans.size() == 0 || ans[0] != nums[i]) {                  
            int count = 0;                  
            for(int j = 0; j < n; j++) {                      
                if(nums[j] == nums[i]) {                          
                    count++;                         
                }                  
            }                 
            if(count > n/3) {                      
                ans.push_back(nums[i]);                  
            }                  
            if(ans.size() == 2) break;              
        }          
    }          
    return ans;      
} 
*/

/*
BETTER APPROACH

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int minimum = (n/3) + 1;
    vector<int> ans;
    map<int, int> mpp;

    for(int i = 0; i < n; i++) {

        mpp[nums[i]]++;
        if(mpp[nums[i]] == minimum) {

            ans.push_back(nums[i]);

        }
        if(ans.size() == 2) break;

    }

    sort(ans.begin(), ans.end());


    return ans;

}
*/


int main() {

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Call the majorityElement method
    vector<int> result = majorityElement(nums);

    // Print the results
    cout << "Majority elements appearing more than n/3 times: ";
    if (result.empty()) {
        cout << "None";
    } else {
        for (int num : result) {
            cout << num << " ";
        }
    }
    cout << "\n";

    return 0;
}
