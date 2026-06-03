#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums, int n) {
        int i = 0;
        for(int j = 1; j < n; j++) {

            if(nums[j] != nums[i]) {

                nums[i + 1] = nums[j];
                i++;
            }

        }

    return i + 1;

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
    
    int ans = removeDuplicates(nums, n);
    cout << "The number of elements is: " << ans; 

}