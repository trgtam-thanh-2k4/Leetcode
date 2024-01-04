class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto i : nums) mp[i]++;
        int ans = 0;
        for (auto x : mp)
        {
            if (x.second == 1) return -1;
            int g = x.second/3;
            int d = x.second % 3;
            if (d > 0) ans += g + 1;
            else ans += g;
        }
        return ans;
    }
};