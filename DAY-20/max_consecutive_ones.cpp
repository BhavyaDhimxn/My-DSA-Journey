#include<iostream>
#include<vector>
using namespace std;

int maxConsecutiveOnes(vector<int> &nums, int n) {

    int count = 0, maximum = 0;

    for(int i = 0; i < n; i++) {
        
        if(nums[i] == 1) {

            count++;
            maximum = max(maximum, count);

        }
        else {

            count = 0;
        
        }

    }

    return maximum;

}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array (0s and 1s): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = maxConsecutiveOnes(nums, n);
    cout << "The maximum number of consecutive 1s is: " << result << endl;

    return 0;
}