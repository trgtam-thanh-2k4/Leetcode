class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                nums.erase(nums.begin() + i);
                i--;
                n = nums.size();
            }
        }
        return n;
    }
};