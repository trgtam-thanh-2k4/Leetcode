class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max) max = nums[i];
        }
        int sum = 0;
        for (int i = 1; i <=k; i++)
        {
            sum += max;
            max++;
        }
        return sum;
    }
};