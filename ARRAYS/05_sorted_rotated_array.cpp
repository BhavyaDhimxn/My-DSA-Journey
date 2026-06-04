#include<iostream>
#include<algorithm>
using namespace std;

bool check(vector<int> &nums, int n) {

    int drops = 0;

    for(int i = 0; i < n; i++) {

        if(nums[i] > nums[(i + 1) % n]) {

            drops++;

        }

    }

    if (drops > 1) return false;
    else return true;

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
    
    int ans = check(nums, n);
    cout << "The array is sorted and rotated: " << ans; 

}