#include<iostream>
#include<vector>
using namespace std;

int floorArray(vector<int>& nums, int n, int x) {

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high) {
        
        int mid = (low + high)/2;

        if(nums[mid] <= x){
           ans = mid;
           low = mid + 1;  
        }
        else high = mid - 1;

    }

    return nums[ans];
}


int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in your array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int x;
    cout << "Enter the target: ";
    cin >> x;
    
    int result = floorArray(nums, n, x);
    cout << "The floor is: " << result << endl;

    return 0;
}