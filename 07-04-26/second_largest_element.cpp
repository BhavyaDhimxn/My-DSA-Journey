#include<iostream>
#include<algorithm>
using namespace std;

int slargestElement(vector<int> &nums, int n){

    int largest = nums[0], slargest = INT_MIN;

    for(int i = 1; i < n; i++) {

        if(nums[i] > largest) {

            slargest = largest;
            largest = nums[i];

        }
        else if(nums[i] > slargest && nums[i] != largest){

            slargest = nums[i];

        }

    }

    return slargest;

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
    
    int ans = slargestElement(nums, n);
    cout << "The second largest number is: " << ans; 

}