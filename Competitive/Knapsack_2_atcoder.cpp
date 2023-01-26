/*There are N items, numbered 1,2,…,N. For each i (1≤i≤N), Item i has a weight of wi​ and a value of vi​.

Taro has decided to choose some of the N items and carry them home in a knapsack. The capacity of the knapsack is W, which means that the sum of the weights of items taken must be at most W.

Find the maximum possible sum of the values of items that Taro takes home.
Constraints
All values in input are integers.
1≤N≤100
1≤W≤10^9
1≤wi​≤W
1≤vi​≤10^3  */

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int wt[105], val[105];

long long dp[105][100005];

long long func(int index, int val_left)
{
    if (val_left == 0)
        return 0;
    if (index < 0)
        return 1e15;
    if (dp[index][val_left] != -1)
        return dp[index][val_left];
    // Dont choose item at index
    long long ans = func(index - 1, val_left);
    // choose item at index
    if (val_left - val[index] >= 0)
        ans = min(ans, func(index - 1, val_left - val[index]) + wt[index]);
    return dp[index][val_left] = ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    int max_val = 1e5;
    for (int i = max_val; i >= 0; i--)
    {
        if (func(n - 1, i) <= w)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
/*3 8
3 30
4 50
5 60*/