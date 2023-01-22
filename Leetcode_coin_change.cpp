/*You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.*/

#include <bits/stdc++.h>
using namespace std;

int dp[10010];
int func(int amount, vector<int> &coins)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;
    for (int coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, func(amount - coin, coins) + 1LL);
    }
    return dp[amount] = ans;
}
int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}
int main()
{
    vector<int> coins = {1, 2, 5};
    cout << coinChange(coins, 11);
    return 0;
}