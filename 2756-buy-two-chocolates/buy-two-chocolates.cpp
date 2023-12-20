class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        ranges::sort(prices);
        if (money - prices[0] - prices[1] >= 0) return money - prices[0] - prices[1];
        return money;
    }
};