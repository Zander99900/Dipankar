#include <bits/stdc++.h>
using namespace std;
// To count the number of connected components
const int N = 1e5 + 10;
vector<int> graph[N];
bool visitedarr[N];

bool dfs(int vertex, int parent)
{
    visitedarr[vertex] = true;
    bool isLoopExists = false;
    for (int child : graph[vertex])
    {
        if (visitedarr[child] && child == parent)
            continue; // if we return from the same edge as we came from
        if (visitedarr[child])
            return true; // if we return from another edge
        isLoopExists |= dfs(child, vertex);
        dfs(child, vertex);
    }
    return isLoopExists;
}

int main()
{
    int n, m; // n represents no of vertices & m represents no. of edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bool isLoopExists = false;
    for (int i = 1; i <= n; i++)
    {
        if (visitedarr[i])
            continue;
        if (dfs(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }
    if(isLoopExists) cout << "Loop exists" << endl;
    else cout << "Loop does not exists" << endl;
    
    return 0;
}
// TC:O(V+E) v = vertices, e = edges.
/*8 6
1 2
2 3
2 4
3 5
6 7
1 5
the representation of the above graph is 6-7, 8, 1-2-3-5-1 (cycle exists)
                                                   |
                                                   4  if we run dfs for 1 connected node, it will mark all nodes connected to it, since it is 3 different connected components so 3 is the ans*/