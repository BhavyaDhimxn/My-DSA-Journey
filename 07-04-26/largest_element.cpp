#include<iostream>
#include<algorithm>
using namespace std;

int largestElement(vector<int> &nums, int n){

    int largest = nums[0];

    for(int i = 1; i < n; i++) {

        if(nums[i] > largest) {

            largest = nums[i];

        }

    }

    return largest;

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
    
    int ans = largestElement(nums, n);
    cout << "The largest number is: " << ans; 

}