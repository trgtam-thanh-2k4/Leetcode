class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = 0;
        int n = nums.size();
        for (int i = 0; i < n -1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((nums[i] - 1) * (nums[j] - 1) > max) max = (nums[i] - 1) * (nums[j] - 1);
            }
        }
        return max;
    }
};