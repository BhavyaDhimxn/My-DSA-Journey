#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

vector<int> nextPerm(vector<int> &nums, int n) {
    
        int index = -1;

        for(int i = n - 2; i >= 0; i--) {

            if(nums[i] < nums[i + 1]){

                index = i;
                break;

            }
            
        }
        if(index == -1) {

            reverse(nums.begin(), nums.end());
            return nums;

        }

        for(int i = n - 1; i > index; i--) {

            if(nums[i] > nums[index]) {

                swap(nums[i], nums[index]);
                break;

            }
        }

        reverse(nums.begin() + index + 1, nums.end());

        return nums;
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

    vector<int> num = nextPerm(nums, n);

    cout << "The next permutation is: ";
    for(int x : num) {
    cout << x << " ";
    }

    return 0;

}