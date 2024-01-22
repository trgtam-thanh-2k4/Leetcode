class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        ranges::sort(nums);
        int mis = -1;
        int dup = -1;
        if (nums[0] != 1) mis = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1]) dup = nums[i];
            else if (nums[i] > nums[i - 1] + 1) mis = nums[i - 1] + 1;
        }
        if (mis == -1) mis = nums[nums.size() - 1] + 1;
        res.push_back(dup);
        res.push_back(mis);
        return res;
    }
};