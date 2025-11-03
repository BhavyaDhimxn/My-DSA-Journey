#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums, int n) {

    int count = 0;
    int element;

    for(int i = 0; i < n; i++) {

        if(count == 0) {

            element = nums[i];

        }

        if(nums[i] == element) {

            count++;

        }
        else {

            count--;

        }

    }

    int counter = 0;

    for(int i = 0; i < n; i++) {

        if(nums[i] == element) {

            counter++;

        }

    }

    if(counter > n / 2) {

        return element;

    }

    return -1;

}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    int result = majorityElement(nums, n);

    if(result != -1) {

        cout << "The majority element is: " << result << endl;

    }
    else {

        cout << "No majority element found." << endl;

    }

    return 0;
}