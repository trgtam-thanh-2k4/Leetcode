class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int countR = 0;
        int countL = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R') countR++;
            else countL++;

            if (countL == countR) 
            {
                count++;
                countL = countR = 0;
            }
        }
        return count;
    }
};