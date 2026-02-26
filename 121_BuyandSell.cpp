#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minprice = prices[0];
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (minprice > prices[i])
            {
                minprice = prices[i];
            }
            else
            {
                int currentprofit = prices[i] - minprice;
                if (currentprofit > maxprofit)
                {
                    maxprofit = currentprofit;
                }
            }
        }
        return maxprofit;
    }
};

int main()
{
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = sol.maxProfit(prices);
    cout << result;
}