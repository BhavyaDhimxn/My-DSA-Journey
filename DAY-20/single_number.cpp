#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &nums, int n) {

    int answer = 0;

    for(int i = 0; i < n; i++) {

        answer ^= nums[i];

    }

    return answer;

}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array (where every element appears twice except for one): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = singleNumber(nums, n);
    cout << "The single number is: " << result << endl;

    return 0;
}