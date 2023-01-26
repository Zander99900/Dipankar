#include<bits/stdc++.h>
using namespace std;
//There is a small modification that we have to create a tree out of graph in such a way that the weights are minimum and no loops are formed that's the only modification
const int N = 1e5 + 10;
int parent[N];
int size[N];
multiset<int> new_size;
void make(int v)
{
    parent[v] = v;
    size[v] = 1;
    new_size.insert(1); //Adding group sum 
}

int find(int v)
{
    if (v == parent[v])
        return v;
    // Path Compression
    return parent[v] = find(parent[v]);
}

void merge(int a, int b){
    new_size.erase(new_size.find(size[a]));
    new_size.erase(new_size.find(size[b]));

    new_size.insert(size[a] + size[b]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        // Union by size
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        merge(a, b);
        size[a] += size[b];
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> edges;
   for (int i = 0; i < m; i++)
   {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u , v}});
   }
   sort(edges.begin(), edges.end());
    for (int i = 1; i <= n; i++) make(i);
    int total_cost = 0;
    for (auto & edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first; 
        int v = edge.second.second; 
        if(find(u) == find(v)) continue;
        Union(u , v);
        total_cost += wt;
        cout << u << " " << v << endl;
    }
    cout << total_cost << endl;
    return 0;
}
/*Input
6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2
3 2 3
3 6 8
2 6 7*/