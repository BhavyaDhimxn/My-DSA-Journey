class Solution {
public:

    /*
    BRUTE FORCE APPROACH:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int i = 0, j = 0, n = n1 + n2;
        vector<int> temp;

        while(i < n1 && j < n2) {
            if(nums1[i] < nums2[j]) temp.push_back(nums1[i++]);
            else temp.push_back(nums2[j++]);
        }
        while(i < n1) {
            temp.push_back(nums1[i++]);
        }
        while(j < n2) {
            temp.push_back(nums2[j++]);
        }
        if(n%2 == 1) return temp[n/2];
        else return (double)(((double)temp[n/2] + (double)temp[n/2 - 1])/2);
    }
    */

    /*
    BETTER APPROACH:
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int i = 0, j = 0, n = n1 + n2;
        int count = 0, index1 = (n/2) - 1, index2 = n/2;
        int el1 = -1, el2 = -1;

        while(i < n1 && j < n2) {
            if(nums1[i] < nums2[j]) {
                if(count == index1) el1 = nums1[i];
                if(count == index2) el2 = nums1[i];
                count++;
                i++;
            }
            else {
                if(count == index1) el1 = nums2[j];
                if(count == index2) el2 = nums2[j];
                count++;
                j++;
            }
        }
        while(i < n1) {
            if(count == index1) el1 = nums1[i];
            if(count == index2) el2 = nums1[i];
            count++;
            i++;
        }
        while(j < n2) {
            if(count == index1) el1 = nums2[j];
            if(count == index2) el2 = nums2[j];
            count++;
            j++;
        }
        if(n%2 == 1) return el2;
        return (double)((double)(el2 + el1)/2);
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size(), n = n1 + n2;
        if(n1 > n2) return findMedianSortedArrays(nums2, nums1);
        int low = 0, high = n1;
        int left = (n1 + n2 + 1)/2;

        while(low <= high) {
            int mid1 = (low + high)/2;
            int mid2 = left - mid1;
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;

            if(mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
            if(mid2 - 1 >= 0) l2 = nums2[mid2 - 1];
            if(mid1 < n1) r1 = nums1[mid1];
            if(mid2 < n2) r2 = nums2[mid2];
            if(l1 <= r2 && l2 <= r1) {
                if(n%2 == 1) return max(l1, l2);
                else return (double)((double)(max(l1, l2) + min(r1, r2))/2);
            }
            else if(l1 > r2) high = mid1 - 1;
            else low = mid1 + 1;
        }
        return 0;
    }
};