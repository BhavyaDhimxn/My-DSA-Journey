#include<iostream>
#include<vector>
using namespace std;

/*
BRUTE FORCE APPROACH:

int findNumber(vector<int> &nums, int n) {
   
    for(int i = 0; i < n; i++) {

        int num = nums[i];
        int count = 0;

        for(int j = 0; j < n; j++) {

            if(nums[j] == num) {

                count++;

            }
        }

        if(count == 1) {

            return num;

        }
    }

    return -1;
}
*/


/*
BRUTE FORCE APPROACH:

int missingNumber(vector<int> &nums, int N, int n) {

}
*/

/*
OPTIMAL APPROACH:

int missingNumber(vector<int> &nums, int n) {


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
    
    int result = findNumber(nums, n);

    cout << "The number occurring once is: " << result << endl;
    
    return 0;

}