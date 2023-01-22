// LCA - Lowest Common Ancestor
#include <bits/stdc++.h>
using namespace std;
// To count the number of connected components
const int N = 1e5 + 10;
vector<int> graph[N];
int parent[N];
int depth[N];
void dfs(int vertex, int par = -1)
{
    parent[vertex] = par;
    for (int child : graph[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
    }
}
vector<int> path(int v)
{
    vector<int> ans;
    while (v != -1)
    {
        ans.push_back(v);
        v = parent[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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

    int x, y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int min_length = min(path_x.size(), path_y.size());

    int LCA = -1;
    for (int i = 0; i < min_length; i++)
    {
        if (path_x[i] == path_y[i])
        {
            LCA = path_x[i];
        }
        else
            break;
    }
    cout << LCA << endl;
    return 0;
}
/*13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
5 12
4 9
4 10
10 11
7 2
*/