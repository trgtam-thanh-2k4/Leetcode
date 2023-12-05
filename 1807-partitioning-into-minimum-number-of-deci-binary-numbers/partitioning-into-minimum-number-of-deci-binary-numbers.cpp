class Solution {
public:
    int minPartitions(string n) {
        int min = 0;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] - '0' > min) min = n[i] - '0';
        }
        return min;
    }
};