#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

vector<int> rearrangeElements(vector<int> &nums, int n) {
    
        vector<int> pos, neg;

        for(int i = 0; i < n; i++) {

            if(nums[i] > 0) {

                pos.push_back(nums[i]);

            } 
            else neg.push_back(nums[i]);

        }

        for(int i = 0; i < n/2; i++) {

            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];

        }

        return nums;
}
*/

/*
OPTIMAL APPROACH:
*/
vector<int> rearrangeElements(vector<int>& nums, int n) {
        
    vector<int> temp(n, 0);
    int i = 0, j = 1;

    for(int index = 0; index < n; index++) {

        if(nums[index] > 0) {

            temp[i] = nums[index];
            i += 2;

        } 
        else {

            temp[j] = nums[index];
            j += 2;

        }

    }

    return temp;

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

    vector<int> num = rearrangeElements(nums, n);

    cout << "The rearranged subarray is: ";
    for(int x : num) {
    cout << x << " ";
    }

    return 0;

}