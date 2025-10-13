#include<iostream>
#include<vector>
using namespace std;

void leftRotateByOne(vector<int> &nums, int n) {
    
    int temp = nums[0];

    for(int i = 1; i < n; i++) {

        nums[i - 1] = nums[i];

    }

    nums[n - 1] = temp;

}

int printArray(vector<int> &nums, int n) {

    for(int i = 0; i < n; i++) {

        cout << nums[i] << " ";

    }
    cout << endl;

    return 0;

}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in array: ";
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    leftRotateByOne(nums, n);
    cout << "The array after left rotation by one is: ";
    printArray(nums, n);

    return 0;
}