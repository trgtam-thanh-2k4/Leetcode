class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        int count = 0;

        for (auto i : nums)
        {
            mp[i]++;
            count = max(count, mp[i]);
        }
        vector<vector<int>> ans(count);
        for (auto a : mp)
        {
            int num = a.first;
            int freq = a.second;

            for (int i = 0; i < freq; i++)
            {
                ans[i].push_back(num);
            }
        }
        return ans;
    }
};