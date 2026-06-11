#include<iostream>
#include<vector>
using namespace std;

/*
BRUTE FORCE APPROACH:

int missingNumber(vector<int> &nums, int N, int n) {

    for(int i = 1; i <= N; i++) {

        int missing = 0;

        for(int j = 0; j < n; j++) {

            if(nums[j] == i) {

                missing = 1;
                break;

            }
        }

        if(missing == 0) return i;

    }
    
    return -1;

}
*/

/*
BRUTE FORCE APPROACH:


int missingNumber(vector<int> &nums, int N, int n) {

    vector<int> hash(N + 1, 0);

    for(int i = 0; i < n; i++) {

        hash[nums[i]] += 1;

    }

    for(int i = 1; i <= N; i++) {

        if(hash[i] == 0) {

            return i;

        }
    }

    return -1;

}
*/

int main() {

    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }
    
    int result = missingNumber(nums, N, n);

    cout << "The missing number is: " << result << endl;
    
    return 0;

}