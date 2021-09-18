
//  You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int i =0;
        int a = 0;
        int b =0;
        vector<int> tmp;

        while(i< m || j < n) {
            a = i >= m ? 2147483647 : nums1[i];
            b = j >= n ? 2147483647 : nums2[j];
            tmp.push_back(min(a,b));
            if(a < b) {
                i++;
            } else
            {
                j++;
            }
        }
        nums1 = tmp;
    }
};