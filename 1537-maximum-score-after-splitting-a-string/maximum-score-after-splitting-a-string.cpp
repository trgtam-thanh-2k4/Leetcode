class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int maxAmount = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int count = 0;
            for (int j = 0; j <= i; j++)
            {
                if (s[j] == '0') count++;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == '1') count++;
            }
            maxAmount = max(maxAmount, count);
        }
        return maxAmount;
    }
};