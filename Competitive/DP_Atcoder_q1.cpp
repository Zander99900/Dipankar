/*There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is hi​.

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

    If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of ∣hi​−hj​∣ is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches Stone
N.*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N], dp[N];

int frog(int i){
    if(i==0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;
    //1st way 1 jump
    cost = min(cost, frog(i-1) + abs(h[i] - h[i-1]));
    //2nd way 2 jumps
    if(i > 1)
    cost = min(cost, frog(i-2) + abs(h[i] - h[i-2]));
    return dp[i] = cost;
}
int main(){
    memset(dp , -1, sizeof(dp));
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << frog(n-1);
    return 0;
}