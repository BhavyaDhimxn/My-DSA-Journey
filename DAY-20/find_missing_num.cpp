#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(vector<int> &nums, int n) {

    int answer = 0;

    for(int i = 0; i < n; i++) {

        answer ^= nums[i];

    }

    for(int i = 0; i < n + 1; i++) {

        answer ^= i;

    }

    return answer;

}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array (from 1 to n with one missing): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int missingNumber = findMissingNumber(nums, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}