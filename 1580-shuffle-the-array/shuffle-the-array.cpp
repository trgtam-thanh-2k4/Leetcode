class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            a.push_back(nums[i]);
        }
        for (int i = n; i < 2 * n; i++)
        {
            b.push_back(nums[i]);
        }
        int m = 0, k = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0) 
            {
                nums[i] = a[m++];
            }
            else nums[i] = b[k++];
        }
        return nums;
    }
};