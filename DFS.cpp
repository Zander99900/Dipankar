#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
bool visitedarr[N];

void dfs(int vertex)
{
    cout << vertex << endl;
    visitedarr[vertex] = true;
    for (int child : graph[vertex])
    {
        // cout << "Hi" << endl;
        cout << "par " << vertex << " child " << child << endl;
        if (visitedarr[child])
            continue;
        dfs(child);
    }
}

int main()
{
    int n, m; // n represents no of vertices & m represents no. of edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2 ;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(n);
    return 0;
}
/*6 6
0 1
0 2
1 4
2 5
5 7
5 6*/ 

