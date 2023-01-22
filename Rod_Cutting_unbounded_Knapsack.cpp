/*Given a rod of length N inches and an array of prices, price[]. pricei denotes the value of a piece of length i. Determine the maximum value obtainable by cutting up the rod and selling the pieces.
Example 1:

Input:
N = 8
Price[] = {1, 5, 8, 9, 10, 17, 17, 20}
Output:
22
Explanation:
The maximum obtainable value is 22 by
cutting in two pieces of lengths 2 and
6, i.e., 5+17=22.
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1005];
int func(int len , vector<int> &prices){
    if(len == 0) return 0;
    if(dp[len] != -1) return dp[len];
    int ans = 0;
    for (int cut_len = 1; cut_len <= prices.size(); cut_len++)
    {
        if(len - cut_len >= 0){
            ans = max(ans, func(len - cut_len, prices) + prices[cut_len -1]);
        }
    }
    return dp[len] = ans;  
}
int cutRod(int price[], int n)
{
    memset(dp, -1, sizeof(dp));
    vector<int> prices(price, price + n);
    return func(n, prices);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << cutRod(a, n) << endl;
    }
    return 0;
}