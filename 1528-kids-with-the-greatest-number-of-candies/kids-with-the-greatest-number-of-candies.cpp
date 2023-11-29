class Solution {
public:
    int findMax(vector<int> candies)
    {
        int max = candies[0];
        for (int i = 1; i < candies.size(); i++)
        {
            if (candies[i] > max) max = candies[i];
        }
        return max;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max = findMax(candies);
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= max) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};