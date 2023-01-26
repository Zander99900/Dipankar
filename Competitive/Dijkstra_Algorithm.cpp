#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector<pair<int, int>> g[N];
vector<vector<int>> times[N];
// Basic Dijkstra Algo with Optimised code
int dijkstra(int source, int n, vector<pair<int, int>> g[N])
{
    vector<int> vis(N, 0);
    vector<int> dist(N, INF);

    set<pair<int, int>> st; // Here the 1st part is for weight whereas in graph, the second part of pair is denoted to weight, we do this so as to minimise the weight when comparing with all possible ways

    st.insert({0, source});
    dist[source] = 0;
    while (st.size() > 0) // The loop will run until the set is empty
    {
        auto node = *st.begin();
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin());
        if (vis[v])
            continue;
        vis[v] = 1;
        for (auto child : g[v]) // We find whether the current distance is less than the previous distance, if it is small, then we minimize it and mark the node as visited
        {
            int child_vis = child.first;
            int wt = child.second;
            if (dist[v] + wt < dist[child_vis])
            {
                dist[child_vis] = dist[v] + wt;
                st.insert({dist[child_vis], child_vis});
            }
        }
    }
    //Modification for leetcode problem
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF) return -1;
        ans = max(ans, dist[i]); //For setting max distance
    }
    return ans;
}
//TC: O(V +Elog)
/*Application of the above algo in a leetcode question: You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target.

We will send a signal from a given node k. Return the minimum time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1.*/

int networkDelayTime(vector<vector<int>> &times, int n, int k)
{
    vector<pair<int, int>> g[N];
    for(auto vec : times){
        g[vec[0]].push_back({vec[1], vec[2]});
    }
    return dijkstra(k, n, g);
}
int main()
{
    int n, m; // n vertices & m edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt; // There is a connection in between x & y with weight wt
        cin >> x >> y >> wt;
        times[i].push_back({x,y,wt}); // There is a weight wt in y node for one-directional graph, in case of uni-directional graph use the push back for both g[x] & g[y]
    }
    cout << dijkstra(1, n, g) << endl;
    // cout << networkDelayTime(times[1],1,n) << endl;
    return 0;
}
/*6 9
1 2 1
1 3 5
2 3 2
3 5 2
2 5 1
2 4 2
4 5 3
4 6 1
5 6 2*/