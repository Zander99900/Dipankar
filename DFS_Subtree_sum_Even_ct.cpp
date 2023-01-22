#include <bits/stdc++.h>
using namespace std;
// To count the number of connected components
const int N = 1e5 + 10;
vector<int> graph[N];
int subtree_sum[N];
int even_ct[N];
void dfs(int vertex, int par = 0)
{
    if (vertex % 2 == 0)
    {
        even_ct[vertex]++;
    }
    subtree_sum[vertex]+= vertex;
    for (int child : graph[vertex])
    {
        if (child == par)
            continue;
        dfs(child, vertex);
    subtree_sum[vertex] += subtree_sum[child];
    even_ct[vertex] += even_ct[child];
    }
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
    dfs(1);
    int q; cin >> q;
    while(q--){
        int v; cin >> v;
        cout <<"The sum of "<< v <<" Subtrees is: "<< subtree_sum[v] << " " << " And the even numbers in this subtree is: " << even_ct[v] << endl;
    }
    return 0;
}
/*13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
5 12
4 9
4 10
10 11
*/