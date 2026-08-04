#include <iostream>
#include <vector>

using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    vector<int> nums3; 
    int left = 0;
    int right = 0;

    while(left < m && right < n) {
        if(nums1[left] <= nums2[right]) {
            nums3.push_back(nums1[left]);
            left++;
        }
        else {
            nums3.push_back(nums2[right]);
            right++;
        }
    }

    while(left < m) {
        nums3.push_back(nums1[left++]);
    }
    while(right < n) {
        nums3.push_back(nums2[right++]);
    }
    
    for(int i = 0; i < (n + m); i++){
        nums1[i] = nums3[i];
    }
}


int main() {
    int m, n;

    cout << "Enter the number of initial elements in nums1 (m): ";
    cin >> m;
    cout << "Enter the number of elements in nums2 (n): ";
    cin >> n;

    vector<int> nums1(m + n, 0); 
    vector<int> nums2(n);


    if (m > 0) {
        cout << "Enter " << m << " sorted elements for nums1: ";
        for (int i = 0; i < m; i++) {
            cin >> nums1[i];
        }
    }


    if (n > 0) {
        cout << "Enter " << n << " sorted elements for nums2: ";
        for (int i = 0; i < n; i++) {
            cin >> nums2[i];
        }
    }


    merge(nums1, m, nums2, n);

    cout << "\nMerged Array (inside nums1):" << endl;
    cout << "[";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i];
        if (i < m + n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
