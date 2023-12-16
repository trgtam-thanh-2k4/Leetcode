class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans(n, 0);
        k = k % n;
        for (int i = 0; i < n - k; i++)
        {
            ans[i + k] = nums[i];
        }
        for (int i = 0; i < k; i++)
        {
            ans[i] = nums[n - k + i];
        }
        nums = ans;
    }
};