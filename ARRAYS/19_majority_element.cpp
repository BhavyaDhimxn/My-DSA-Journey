#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BRUTE FORCE APPROACH:

int majorityElement(vector<int> &nums, int n) {
    
    int count = 0;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(nums[i] == nums[j]) {

                count++;

            }

        }

        if(count > n/2) {

            return nums[i];
            
        }
    }

    return -1;
}
*/

/*
BETTER APPROACH:

int majorityElement(vector<int> &nums, int n) {

    map<long long, int> mpp;

    for(int i = 0; i < n; i++) {

        mpp[nums[i]]++;

    }

    for(auto it : mpp) {

        if(it.second > n/2) {

            return it.first;
        }
    }

    return -1;

}
*/

/*
OPTIMAL APPROACH:
*/
int majorityElement(vector<int> &nums, int n) {
    
    int el;
    int frequency = 0;

    for(int i = 0; i < n; i++) {

        if(frequency == 0) {

            el = nums[i];
            frequency = 1;

        }
        else if(nums[i] == el) {

            frequency++;

        }
        else {

            frequency--;
        }

    }

    return el;

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

    int result = majorityElement(nums, n);

    cout << "The majority element is: " << result << endl;
    
    return 0;

}