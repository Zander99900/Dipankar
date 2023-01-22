#include <bits/stdc++.h>
using namespace std;
const int N = 100;
const int INF = 1e9 + 10;
int dist[N][N];
// This algo is used to pre-compute the minimum distance between every pair of nodes at once so it will be easy to solve questions in O(1)

/* Add all vertices one by one to the set of intermediate vertices. ---> Before start of an iteration, we have shortest distances between all pairs of vertices such that the shortest distances consider only the vertices in set {0, 1, 2, .. k-1} as intermediate vertices. ----> After the end of an iteration, vertex no. k is added to the set of intermediate vertices and the set becomes {0, 1, 2, ..k} */
int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                dist[i][j] = 0;
            else
                dist[i][j] = INF;
        }
    }
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        dist[x][y] = wt;
    }

    for (int k = 1; k <= n; k++)
    {

        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                //Alternative method
                // if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != INF && dist[i][k] != INF))
                //     dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "I";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
/*input: 6 9
1 2 1
1 3 5
2 3 2
3 5 2
2 5 1
2 4 2
4 5 3
4 6 1
5 6 2*/