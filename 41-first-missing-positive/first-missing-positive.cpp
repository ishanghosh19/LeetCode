class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());        
        int length = nums.size();
        int smallest_missing = 1;   
        for (int i = 0; i < length; i++) {
            if (nums[i] <= 0) {
                continue;
            }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] == smallest_missing) {
                smallest_missing++;
            } else if (nums[i] > smallest_missing) {
                return smallest_missing;
            }
        }
        return smallest_missing;
    }
};