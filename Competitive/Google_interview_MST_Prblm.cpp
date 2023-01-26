/*There are n new cities located in Prefecture X. Cities are numbered from 1 to n. City i is located xi km North of the shrine and yi km East of the shrine. It is possible that (xi,yi)=(xj,yj) even when i≠j Shichikuji must provide electricity to each city either by building a power station in that city, or by making a connection between that city and another one that already has electricity. So the City has electricity if it has a power station in it or it is connected to a City which has electricity by a direct connection or via a chain of connections.

Building a power station in City i will cost ci yen;
Making a connection between City i and City j will cost ki+kj yen per km of wire used for the connection. However, wires can only go the cardinal directions (North, South, East, West). Wires can cross each other. Each wire must have both of its endpoints in some cities. If City i and City j are connected by a wire, the wire will go through any shortest path from City i to City j. Thus, the length of the wire if City i and City j are connected is |xi−xj|+|yi−yj| km.

Shichikuji wants to do this job spending as little money as possible, since according to her, there isn't really anything else in the world other than money. However, she died when she was only in fifth grade so she is not smart enough for this. And thus, the new resident deity asks for your help.

And so, you have to provide Shichikuji with the following information: minimum amount of yen needed to provide electricity to all cities, the cities in which power stations will be built, and the connections to be made.

If there are multiple ways to choose the cities and the connections to obtain the construction of minimum price, then print any of them.
Input

First line of input contains a single integer n (1≤n≤2000) — the number of cities.

Then, n lines follow. The i-th line contains two space-separated integers xi (1≤xi≤106) and yi (1≤yi≤106) — the coordinates of the i-th city.

The next line contains n space-separated integers c1,c2,…,cn (1≤ci≤109) — the cost of building a power station in the i-th city.

The last line contains n space-separated integers k1,k2,…,kn (1≤ki≤109).
Output

In the first line print a single integer, denoting the minimum amount of yen needed.

Then, print an integer v — the number of power stations to be built.

Next, print v space-separated integers, denoting the indices of cities in which a power station will be built. Each number should be from 1 to n and all numbers should be pairwise distinct. You can print the numbers in arbitrary order.

After that, print an integer e — the number of connections to be made.

Finally, print e pairs of integers a and b (1≤a,b≤n, a≠b), denoting that a connection between City a and City b will be made. Each unordered pair of cities should be included at most once (for each (a,b) there should be no more (a,b) or (b,a) pairs). You can print the pairs in arbitrary order.

If there are multiple ways to choose the cities and the connections to obtain the construction of minimum price, then print any of them*/
#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 10;
int parent[N], sz[N];
int c[N], k[N];
void make(int v)
{
    parent[v] = v;
    sz[v] = 1;
}
int find(int v)
{
    if (parent[v] == v)
        return parent[v];
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> cities(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> cities[i].first >> cities[i].second;
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> c[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> k[i];
    }
    vector<pair<long long, pair<int, int>>> edges;

    for (int i = 1; i <= n; ++i)
    {
        edges.push_back({c[i], {0, i}});
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            int dist = abs(cities[i].first - cities[j].first) + abs(cities[i].second - cities[j].second);
            long long cost = dist * 1LL * (k[i] + k[j]);
            edges.push_back({cost, {i, j}});
        }
    }
    sort(edges.begin(), edges.end());
    for (int i = 0; i <= n; ++i)
    {
        make(i);
    }
    long long total_cost = 0;
    vector<int> power_stations;
    vector<pair<int, int>> connections;
    for (auto &edge : edges)
    {
        long long cost = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (find(u) == find(v))
            continue;
        Union(u, v);
        total_cost += cost;
        if (u == 0 || v == 0)
        {
            power_stations.push_back(max(u, v));
        }
        else
        {
            connections.push_back({u, v});
        }
    }
    cout << total_cost << endl;
    cout << power_stations.size() << endl;
    for (int station : power_stations)
    {
        cout << station << " ";
    }
    cout << endl;
    cout << connections.size() << endl;
    for (auto &connection : connections)
    {
        cout << connection.first << " " << connection.second << endl;
    }
}
/*3
2 3
1 1
3 2
3 2 3
3 2 3*/