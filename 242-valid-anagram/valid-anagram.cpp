class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int a[26];
        int b[26];
        for (int i = 0; i < 26; i++)
        {
            a[i] = 0;
            b[i] = 0;
        }
        for (int i = 0; i < s.length(); ++i)
        {
            a[int(s[i]) - 'a']++;
            b[int(t[i]) - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
};