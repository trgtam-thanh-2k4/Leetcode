class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        ranges::sort(nums);
        int small = nums[0] * nums[1];
        int large = nums[n - 1] * nums[n - 2];
        return large - small;
    }
};