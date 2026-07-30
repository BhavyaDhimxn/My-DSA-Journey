#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
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

/*
OPTIMAL APPROACH
*/
vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int minimum = (int)(n/3) + 1;
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;
    vector<int> ans;


    for(int i = 0; i < n; i++) {

        if(cnt1 == 0 && nums[i] != el2) {

            cnt1 = 1;
            el1 = nums[i];

        }
        else if(cnt2 == 0 && nums[i] != el1) {

            cnt2 = 1;
            el2 = nums[i];

        }
        else if(nums[i] == el1) cnt1++;
        else if(nums[i] == el2) cnt2++;
        else {
            
            cnt1--; 
            cnt2--;

        }

    }
    
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {

        if(nums[i] == el1) cnt1++;
        if(nums[i] == el2) cnt2++;

    }

    if(cnt1 >= minimum) ans.push_back(el1);
    if(cnt2 >= minimum) ans.push_back(el2); 

    sort(ans.begin(), ans.end());


    return ans;

}

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
