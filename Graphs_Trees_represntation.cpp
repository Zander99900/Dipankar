#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
int graph1[N][N];
vector<int> graph2[N];
vector<pair<int,int>> graph3[N];
int main()
{
    // Method 1.; representation using adjacency matrix (using graph1[n][m])
    int n, m; // n represents no of vertices & m represents no. of edges
    cin >> n >> m;
    // for (int i = 0; i < m; i++)
    // {
    //     int v1, v2; // as it is uni-directional so we connect both vertices to each other
    //     cin >> v1 >> v2;
    //     graph1[v1][v2] = 1;
    //     graph1[v2][v1] = 1; // 1 represents that these edges are connected and since we declared in global so by default values are set to 0
    //     // the only problem with this graph is space complexity i.e., O(N^2) which will be prblm if matrix is more than 10^3 so we cannot store large arrays

    //     // Method 2.; representation using adjacency list (using graph2[n][m])
    //     graph2[v1].push_back(v2);
    //     graph2[v2].push_back(v1);
    //     //space complexity -> O(V+E) given Edge < 10^7
    // }

    //Weighted graph
    for (int i = 0; i < m; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph3[v1].push_back({v2, wt});
        graph3[v2].push_back({v1, wt});
    }
    
    return 0;
}