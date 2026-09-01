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
    */
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
};