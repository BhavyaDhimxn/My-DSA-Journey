#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kthElement(vector<int> &nums1, vector<int> &nums2, int k) {
    int n1 = nums1.size(), n2 = nums2.size(), n = n1 + n2;
    
    if(n1 > n2) return kthElement(nums2, nums1, k);
    int low = max(0, k - n2), high = min(k, n1);
    int left = k;

    while(low <= high) {
        int mid1 = (low + high)/2;
        int mid2 = left - mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;

        if((mid1 - 1) >= 0) l1 = nums1[mid1 - 1];
        if((mid2 - 1) >= 0) l2 = nums2[mid2 - 1];
        if(mid1 < n1) r1 = nums1[mid1];
        if(mid2 < n2) r2 = nums2[mid2];
        if(l1 <= r2 && l2 <= r1) {
            return max(l1, l2);
        }
        else if(l1 > r2) high = mid1 - 1;
        else low = mid1+ 1;
    }
    return -1;
}

int main() {
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int k = 5;
    
    //Print the answer
    cout << "The " << k << "-th element of two sorted arrays is: " << kthElement(a, b, k) << '\n';

    return 0;
}