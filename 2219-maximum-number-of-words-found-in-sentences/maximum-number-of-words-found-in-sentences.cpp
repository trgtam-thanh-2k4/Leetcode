class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < sentences[i].length(); j++)
            {
                if (sentences[i][j] == ' ') count++;
            }
            if (count + 1 > max) max = count + 1;
        }
        return max;
    }
};