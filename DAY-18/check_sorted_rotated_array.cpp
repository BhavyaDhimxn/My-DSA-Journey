#include<iostream>
#include<vector>
using namespace std;

bool checkArray(vector<int> &nums, int n) {

    int count = 0;

    for(int i = 0; i < n; i++) {

        if(nums[i] > nums[(i + 1) % n]) {

            count++;

        }

    }

    return count <= 1;

}

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    bool ans = checkArray(nums, n);
    cout << "The array is sorted and rotated: " << ans << endl;

    return 0;
}