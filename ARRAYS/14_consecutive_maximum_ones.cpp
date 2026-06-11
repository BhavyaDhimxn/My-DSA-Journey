#include<iostream>
#include<vector>
using namespace std;


int maxOnes(vector<int> &nums, int n) {

    int count = 0;
    int maximum = 0;

    for(int i = 0; i < n; i++) {

        if(nums[i] == 1) {

            count++;

            if(count > maximum) {

                maximum = count;

            }

        }

        else count = 0;

    }

    return maximum;

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
    
    int result = maxOnes(nums, n);

    cout << "The maximum number of consecutive ones is: " << result << endl;
    
    return 0;

}