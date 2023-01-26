#include <bits/stdc++.h>
using namespace std;
const int N = 510;
const int INF = 1e9 + 10;
long long dist[N][N];
/* Add all vertices one by one to the set of intermediate vertices. ---> Before start of an iteration, we have shortest distances between all pairs of vertices such that the shortest distances consider only the vertices in set {0, 1, 2, .. k-1} as intermediate vertices. ----> After the end of an iteration, vertex no. k is added to the set of intermediate vertices and the set becomes {0, 1, 2, ..k} */
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> dist[i][j];
        }
    }

    vector<int> del_order(n);
    for (int i = 0; i < n; i++){
        cin >> del_order[i];
    }

    reverse(del_order.begin(), del_order.end());
    vector<long long> ans;
    for (int k = 0; k < n; k++)
    {
        int k_v = del_order[k];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                long long new_dist = dist[i][k_v] + dist[k_v][j];
                dist[i][j] = min(dist[i][j], new_dist);
                // Alternative method
                //  if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != INF && dist[i][k] != INF))
            }
        }
        long long sum = 0;
        for (int i = 0; i <= k; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                sum += dist[del_order[i]][del_order[j]];
            }
        }
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    for (auto val : ans)
    {
        cout << val << endl;
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