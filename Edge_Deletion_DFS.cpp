#include <bits/stdc++.h>
using namespace std;
// To count the number of connected components
const int N = 1e5 + 10;
const int M = 1e9 + 7;
vector<int> graph[N];
int subtree_sum[N];
int val[N];
void dfs(int vertex, int par = -1)
{
    subtree_sum[vertex] += val[vertex];
    for (int child : graph[vertex])
    {
        if (child == par)
            continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child]; 
    }
}
int main()
{
    int n; // n represents no of vertices & m represents no. of edges
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    long long ans = 0;
    for (int i = 2; i < n; i++)
    {
    int part1 = subtree_sum[i];
    int part2 = subtree_sum[i] - part1;
    ans = max(ans,(part1 * 1LL * part2)% M);
    }
    

    cout << ans << endl;
    return 0;
}