#include<iostream>
#include<algorithm>
using namespace std;

int sSmallestElement(vector<int> &nums, int n) {

    int smallest = nums[0], ssmallest = INT_MAX;

    for(int i = 0; i < n; i++) {

        if(nums[i] < smallest) {

            ssmallest = smallest;
            smallest = nums[i];

        }
        else if(nums[i] < ssmallest && nums[i] != smallest) {

            ssmallest = nums[i];

        }

    }

    return ssmallest;

}

int main() {

    vector<int> nums;
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    
    cout << "Enter the elements of your array: ";
    for(int i = 0; i < n; i++) {

        int x;
        cin >> x;
        nums.push_back(x);

    }
    
    int ans = sSmallestElement(nums, n);
    cout << "The second smallest number is: " << ans; 

}