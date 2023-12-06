class Solution {
public:
    int totalMoney(int n) {
        int money = 1;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int moneyEveryday =  money + (i % 7);
            if (i % 7 == 0 && i != 0)
            {
                money++;
                moneyEveryday++;
            }
            count += moneyEveryday;
        }
        return count;
    }
};