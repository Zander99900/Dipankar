/*You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.

Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1     */

#include <bits/stdc++.h>
using namespace std;
// The difference between the previous q 7 this one is, order was not important but here order matters, so we use the recursion in such a way that it will change the coin amount only when all possible ways of a particular denomination is computed
int dp[310][10010];
int func(int index, int amount, vector<int> &coins)
{
    if (amount == 0)
        return 1;
    if (index < 0)
        return 0;
    if (dp[index][amount] != -1)
        return dp[index][amount];

    int ways = 0;
    for (int coin_amount = 0; coin_amount <= amount; coin_amount += coins[index])
    {
        ways += func(index - 1, amount - coin_amount, coins);
    }
    return dp[index][amount] = ways;
}
int change(int amount, vector<int> &coins)
{
    memset(dp, -1, sizeof(dp));
    return func(coins.size() - 1, amount, coins);
}
int main()
{
    vector<int> coins = {1, 2, 5};
    cout << change(5, coins);
    return 0;
}