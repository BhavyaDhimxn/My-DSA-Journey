#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int> &nums, int n) {

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

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    int ans = removeDuplicate(nums, n);
    cout << "The key is: " << ans << endl;

    return 0;

}