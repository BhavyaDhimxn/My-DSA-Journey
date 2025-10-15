#include<iostream>
#include<vector>
using namespace std;

void leftRotateByD(vector<int> &nums, int n, int d) {

    d = d % n;
    vector<int> temp(d);
    for(int i = 0; i < d; i++) {

        temp[i] = nums[i];

    }

    for(int i = d; i < n; i++) {
            
            nums[i - d] = nums[i];

    }

    for(int i = n - d; i < n; i++) {

        nums[i] = temp[i - (n - d)];

    }

}

void printArray(vector<int> &nums, int n) {

    for(int i = 0; i < n; i++) {

        cout << nums[i] << " ";

    }

    cout << endl;

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

    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;

    leftRotateByD(nums, n, d);
    cout << "The array after left rotation by " << d << " is: ";
    printArray(nums, n);

    return 0;
}