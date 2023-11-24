class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ranges::sort(strs);
        int n = strs.size();
        string a = strs[0], b = strs[n - 1], ans = "";
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == b[i]) ans += a[i];
            else break;
        }
        return ans;
    }
};