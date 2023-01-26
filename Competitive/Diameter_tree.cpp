#include <bits/stdc++.h>
using namespace std;
// To count the number of connected components
const int N = 1e5 + 10;
vector<int> graph[N];
int depth[N];
void dfs(int vertex, int par = -1)
{
    for (int child : graph[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
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
    int max_depth = -1;
    int max_depth_node;
    for (int i = 1; i <= n; i++)
    {
        if (max_depth < depth[i])
        {
            max_depth = depth[i];
            max_depth_node = i; // one end of the diameter is found
        }
        depth[i] = 0; // to do dfs once again from this node
    }

    dfs(max_depth_node);
    // max_depth = -1;

    for (int i = 1; i <= n; i++)
    {
        if (max_depth < depth[i])
        {
            max_depth = depth[i];
        }
    }
    cout <<"Diamtere of tree is: " << max_depth << endl;
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
8 12
4 9
4 10
10 11
*/