
//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

//A subarray is a contiguous part of an array.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sum = 0;
        int minSum = 0;
        for(int i = 0; i< nums.size(); i++) {
            sum += nums[i];
            maxSum = max(maxSum, sum-minSum);
            minSum = min(minSum,sum);
        }        
        return maxSum;
    }

};