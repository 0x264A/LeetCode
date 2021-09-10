// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {        
        for(int i = 0 ; i < (nums.size()); i ++ )  {
            for(int j = 1; j < nums.size(); j++) {
                if((nums[i] + nums[j]) == target) {
                    vector result{i,j};
                    return result;
                }              
            }
        }
          return vector{0};      
    }
};

class Solution1 {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < (int)nums.size();i++) {
         if(map.count(target - nums[i])) {
            return {map[target - nums[i]], i};
         }
         map[nums[i]] = i;
    }
    return {-1, -1}; // error, not found
  }
};