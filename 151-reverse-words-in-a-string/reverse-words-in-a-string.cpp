class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        queue<string> q;

        int i = n - 1;
        string res = "";
        while (i >= 0)
        {
            
            if (s[i] == ' ') 
            {
                i--;
                if (res != "")
                    q.push(res);
                res = "";
            }
            else
            {
                res = s[i] + res;
                if (i == 0)
                {
                    if (res != "")
                        q.push(res);
                    break;
                }
                i--;
            }
            
        }
        string result = "";
        while (!q.empty())
        {
            result += q.front();
            q.pop();
            result += ' '; 
        }
        result.pop_back();
        return result;
    }
};