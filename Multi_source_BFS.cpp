/*After a long duration of the painful, torturous and tumultuous periods of capitalism in Snakeland, now the snakes have decided to adopt socialism. The houses in Snakeland are arranged in a rectangular fashion of dimension n * m. The wealth of the snake in the house at cell (i, j) is given by a[i][j] rupees.

A bill has been passed for making a smooth transition from capitalism to socialism. At the end of each hour, the wealth of a snake will grow and will become equal to the highest wealth that its neighbor had (at the start of the hour). That is, consider the maximum wealth among its neighbors at the start of the hour, and this snake's wealth will become equal to that at the end of the hour. Note that this increase in wealth will happen simultaneously for each snake. Two houses are said to be neighbors of each other if they share a side or corner with each other. Find out the minimum number of hours required for this transition.*/
#include <bits/stdc++.h>
using namespace std;
const int INFIN = 1e9 + 10;
const int N = 1e3 + 10;
int graph[N][N];
int vis[N][N];
int level[N][N];
int n, m;
vector<pair<int, int>> movements{
    {0, 1}, {1, 1}, {0, -1}, {-1, 1}, {1, -1}, {1, 0}, {-1, 0}, {-1, -1}};

bool isValid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}

void reset()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = 0;
            level[i][j] = INFIN;
        }
    }
}

int bfs()
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mx = max(mx, graph[i][j]);
        }
    }
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mx == graph[i][j])
            {
                q.push({i, j});
                level[i][j] = 0;
                vis[i][j] = 1;
            }
        }
    }
    int ans = 0;
    while (!q.empty())
    {
        auto v = q.front();
        int graph_x = v.first;
        int graph_y = v.second;
        q.pop();
        for (auto movement : movements)
        {
            int child_x = movement.first + graph_x;
            int child_y = movement.second + graph_y;
            if (!isValid(child_x, child_y))
                continue;
            if (vis[child_x][child_y])
                continue;
            q.push({child_x, child_y});
            level[child_x][child_y] = level[graph_x][graph_y] + 1;
            vis[child_x][child_y] = 1;
            ans = max(ans, level[child_x][child_y]);
        }
    }
    return ans;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> m;
        reset();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> graph[i][j];
            }
        }
        cout << bfs() << endl;
    }

    return 0;
}
/* 3
2 2
1 1
1 1
2 2
1 1
1 2
3 4
1 2 1 2
1 1 1 2
1 1 2 2*/