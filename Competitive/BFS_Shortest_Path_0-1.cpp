// Using 0 1 method, we can find shortest path 1st by modifying that the edges with 0 weight will be inserted in front of queue and the rest nodes will be inserted in back as usual
#include <bits/stdc++.h>
using namespace std;
const int INFIN = 1e9 + 10;
const int N = 1e5 + 10;
vector<pair<int, int>> graph[N];
vector<int> level(N, INFIN);

    int v1, v2;
int bfs()
{
    deque<int> q;
    q.push_back(1);
    level[1] = 0;

    while (!q.empty())
    {
        int cur_vector = q.front();
        q.pop_front();
        for (auto child : graph[cur_vector])
        {
            int child_vector = child.first;
            int wt = child.second;
            if (level[cur_vector] + wt < level[child_vector])
            {
                level[child_vector] = level[cur_vector] + wt;
                if (wt == 1)
                {
                    q.push_back(child_vector);
                }
                else{
                    q.push_front(child_vector);
                }
            }
        }
    }
    return level[v1] == INFIN ? -1 : level[v1];
}

int main()
{
    cin >> v1 >> v2;
    for (int i = 0; i < v2; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back({y, 0});
        graph[y].push_back({x, 1});
    }
    cout << bfs() << endl;
    return 0;
}
/*7 7
1 2
3 2
3 4
7 4
6 2
5 6
7 5*/