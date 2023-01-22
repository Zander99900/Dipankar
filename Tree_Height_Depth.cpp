#include <bits/stdc++.h>
using namespace std;
// To count the number of connected components
const int N = 1e5 + 10;
vector<int> graph[N];
int depth[N], height[N];
void dfs(int vertex, int par = 0)
{
    for (int child : graph[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
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
    for (int i = 1; i <= n; i++)
    {
        cout << i << " Depth: " << depth[i] << " Height: " << height[i] << endl;
    }

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
*/