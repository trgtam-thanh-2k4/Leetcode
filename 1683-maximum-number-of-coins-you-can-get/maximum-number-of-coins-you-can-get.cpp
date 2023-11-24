class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int i = 0;
        int j = piles.size() - 1;
        int sum = 0;
        while (i < j)
        {
            sum += piles[i + 1];
            i += 2;
            j--;
        }
        return sum;
    }
};