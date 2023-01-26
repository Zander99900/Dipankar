/*There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is hi​.

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N: If the frog is currently on Stone i, jump to one of the following: Stone i+1,i+2,…,i+K. Here, a cost of |hi​−hj​| is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches Stone N.

All values in input are integers.
2≤N≤10^5
1≤K≤100
1≤hi​≤10^4*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N], dp[N];
int k;
int frog(int i){
    if(i==0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;
    //k jumps
    for (int j = 1; j <= k; j++)
    {
    if(i -j >= 0)
    cost = min(cost, frog(i-j) + abs(h[i] - h[i-j]));
    }
    return dp[i] = cost;
    
}
int main(){
    memset(dp , -1, sizeof(dp));
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << frog(n-1);
    return 0;
}