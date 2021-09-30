// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        auto ret = 0;
        for(auto i: nums) {
            ret ^=i;
        }
        return ret;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return accumulate(nums.cbegin(), nums.cend(), 0, bit_xor<int>());
    }
};