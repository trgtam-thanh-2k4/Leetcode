class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        string ans = "";
        bool isSubstr = false;
        int max = -1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    if (j - 1 - i > max)
                    {
                        ans = s.substr(i + 1, j - 1 - i);
                        max = j - i - 1;
                    }
                        
                    isSubstr = true;
                } 
            }
        }
        if (isSubstr) 
            return int(ans.length());
        return -1;
    }
};