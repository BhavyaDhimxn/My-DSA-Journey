#include<iostream>
#include<vector>
#include<map>
using namespace std;


/*
BRUTE APPROACH
int subarrayCount(vector<int> &nums, int k, int n) {

    int count  = 0;
    
    for(int i = 0; i < nums.size(); i++) {

        int sum = 0;

        for(int j = i; j < nums.size(); j++) {
            
            sum += nums[j];

            if(sum == k) {
                count += 1;
            }
        }
    }

    return count;
}
*/


/*
OPTIMAL APPROACH
*/
int subarrayCount(vector<int> &nums, int k, int n){

    map<long long, int> mpp;
    int count = 0;
    long long prefixSum = 0;

    mpp[0] = 1;

    for(int i = 0; i < n; i++) {
        
        prefixSum += nums[i];
        long long removed = prefixSum - k;
        count += mpp[removed];
        mpp[prefixSum] += 1;

    }

    return count ;

}

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    vector<int> ans(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {

        cin >> ans[i];

    }

    int result = subarrayCount(ans, k, n);

    cout << "The length of the longest subarray is: " << result << endl;

    return 0;


}