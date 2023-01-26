// The basic approach of DP is to reduce the no of repeated computations in order to reduce TC, e.g. to compute the factorial of a no, the general recursion will give TC of O(2^n) but with this approach we can reduce it to O(N).
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int dp[N]; // once computed, we store all the values in this array
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
    memset(dp, -1, sizeof(dp)); // setting all the values of dp array as -1
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}