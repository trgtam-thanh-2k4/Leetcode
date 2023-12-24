class Solution {
public:
    int minOperations(string s) {
        // int n = s.length();
        // int count = 0;
        // for (int i = 1; i < n; i++)
        // {
        //     if (s[i] == s[i - 1])
        //     {
        //         if (s[i] == '1') s[i] = '0';
        //         else s[i] = '1';
        //         count++;
        //     }
        // }
        // return count;
        int n=s.size(), op[2]={0};
        for(int i=0; i<n; i+=2){
            op[s[i]=='0']++;
            if (i+1<n) [[likely]]
                op[s[i+1]=='1']++;
        }
        return min(op[0], op[1]);
    }
};