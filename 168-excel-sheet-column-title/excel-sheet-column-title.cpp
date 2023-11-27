class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        int n = columnNumber;
        while (n > 26)
        {
            n--;
            res = char('A' + n % 26) + res;
            n /= 26;
        }
        n--;
        res = char('A' + n) + res;
        return res;
    }
};