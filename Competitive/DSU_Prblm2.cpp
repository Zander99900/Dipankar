#include<bits/stdc++.h>
using namespace std;
/*Well, unfortunately things didn't go so well for Alex's campers, and now there are N campers wandering around the city aimlessly. You have to handle Q queries; which consist of two groups finding each other and becoming one larger group. After each query, output the difference between the group of largest size and group of smallest size. If there is only one group, output 0. At first, everyone is in their own group.

Also note, if the two campers in the query are already in the same group, print the current answer, and skip merging the groups together.

Input:

The first line consists of two space separated integers, N and Q

The next Q line consists of two integers, A and B, meaning that the groups involving camper A and camper B find each other.

Output:

Output Q lines, the answer after each query. */
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
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
        if (new_size.size() == 1){
            cout << 0 << endl;
        }
        else{
            int min = *(new_size.begin());
            int max = *(new_size.end());
        cout << max - min << endl;
        }
    }
    return 0;
}