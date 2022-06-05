class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::unordered_map<int, int> map;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) 
            map[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int  target = 0 - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (j != i+1 && nums[j] == nums[j-1]) continue;
                if (map[-(nums[i] + nums[j])] > j) {
                    std::vector<int> tmp{ nums[i], nums[j], target - nums[j]};
                    result.push_back(tmp);  
                }
            }
        }
        return result;
    }
};