#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*
BETTER APPROACH:
*/
int maxiSum(vector<int> &nums, int n) {

    int maximum = 0;

    for(int i = 0; i < n; i++) {

        int sum = 0;

        for(int j = i; j < n; j++) {

            sum += nums[j];
            
            maximum = max(maximum, sum);

        }


    }

    return maximum;

}


/*
OPTIMAL APPROACH:

int majorityElement(vector<int> &nums, int n) {
    
    int el;
    int frequency = 0;

    for(int i = 0; i < n; i++) {

        if(frequency == 0) {

            el = nums[i];
            frequency = 1;

        }
        else if(nums[i] == el) {

            frequency++;

        }
        else {

            frequency--;
        }

    }

    return el;

}
*/


int main() {

    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    int result = maxiSum(nums, n);

    cout << "The maximum subarray sum is: " << result << endl;
    
    return 0;

}