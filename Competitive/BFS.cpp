#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
int vis[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=1;

    while (!q.empty()){
        int cur_vertex = q.front();
        q.pop();
        cout << cur_vertex << " ";
        for (int child : graph[cur_vertex])
        {
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_vertex] + 1;
            }
        }
    }
        cout << endl;
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
    bfs(1);
    for (int i = 1; i < n;i++)
    {
        cout << i << ": " << level[i] << endl;
    }
    
    return 0;
} //TC : O(V+E)
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