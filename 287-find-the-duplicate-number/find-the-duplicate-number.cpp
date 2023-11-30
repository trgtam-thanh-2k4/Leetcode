class Solution {
public:
    int findMax(vector<int> nums)
    {
        int max = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > max) max = nums[i];
        }
        return max;
    }
    int findDuplicate(vector<int>& nums) {
        ranges::sort(nums);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1]) return nums[i];
        }
        return 0;
    }
};