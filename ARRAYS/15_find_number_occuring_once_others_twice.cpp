#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
BRUTE FORCE APPROACH:

int findNumber(vector<int> &nums, int n) {
   
    for(int i = 0; i < n; i++) {

        int num = nums[i];
        int count = 0;

        for(int j = 0; j < n; j++) {

            if(nums[j] == num) {

                count++;

            }
        }

        if(count == 1) {

            return num;

        }
    }

    return -1;
}
*/


/*
BETTER APPROACH:

int findNumber(vector<int> &nums, int n) {

    map<long long, int> mpp;

    for(int i = 0; i < n; i++) {

        mpp[nums[i]]++;

    }

    for(auto it : mpp) {

        if(it.second == 1) {

            return it.first;

        }
    }

    return -1;

}
*/

/*
OPTIMAL APPROACH:
*/
int findNumber(vector<int> &nums, int n) {

    int ans = 0;

    for(int i = 0; i < n; i++) {

        ans = ans^nums[i];

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
    
    int result = findNumber(nums, n);

    cout << "The number occurring once is: " << result << endl;
    
    return 0;

}