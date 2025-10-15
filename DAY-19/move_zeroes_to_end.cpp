#include<iostream>
#include<vector>
using namespace std;
void moveZeroesToEnd(vector<int> &nums, int n) {
    
    int j = 0;

    for(int i = 0; i < n; i++) {
        
        if(nums[i] != 0) {
            
            swap(nums[i], nums[j]);
            j++; 
            
        }
        
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

    moveZeroesToEnd(nums, n);
    cout << "The array after moving zeroes to the end is: ";
    printArray(nums, n);

    return 0;
}