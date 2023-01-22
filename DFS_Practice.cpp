#include <bits/stdc++.h>
using namespace std;
//To count the number of connected components
const int N = 1e5 + 10;
vector<int> graph[N];
bool visitedarr[N];
vector<vector<int>> cc; //This will store all the current components of the graph
vector<int> current_cc; //this will store only one current component

void dfs(int vertex)
{
    visitedarr[vertex] = true;
    current_cc.push_back(vertex);
    for (int child : graph[vertex])
    {
        if (visitedarr[child])
            continue;
        dfs(child);
    }
}

int main()
{
    int n, m; // n represents no of vertices & m represents no. of edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2 ;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if(visitedarr[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc); //Storing the current cc
        ct++;
    }
    cout << "No. of connected components: "<< ct << endl;
    //Alternatively we can also print cc.size()
    cout <<"Printing all the connected components" << endl;
    for (auto c_cc : cc)
    {
        for (int vertex : c_cc)
        {
            cout << vertex << " ";
        }
        cout << endl;
    }
    
    return 0;
}
//TC:O(V+E) v = vertices, e = edges.
/*8 5
1 2
2 3
2 4
3 5
6 7

the representation of the above graph is 6-7, 8, 1-2-3-5
                                                   |
                                                   4  if we run dfs for 1 connected node, it will mark all nodes connected to it, since it is 3 different connected components so 3 is the ans*/