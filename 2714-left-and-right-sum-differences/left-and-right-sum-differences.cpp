class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        const int n = nums.size();
        vector<int> leftSum(n, 0);
        int prefix = 0;
        int suffix = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0) prefix += nums[i - 1];
            leftSum[i] += prefix;
        }
        vector<int> rightSum(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            if ((int)i + 1 < n) suffix += nums[i + 1];
            rightSum[i] = suffix;
        }
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            ans[i] = (abs(leftSum[i] - rightSum[i]));
        }
        return ans;
    }
};