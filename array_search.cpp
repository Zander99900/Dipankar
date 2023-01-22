#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
long long max_arr[N];
vector<long long> findMissing(long long A[], long long B[], int N, int M)
{
    vector<long long> v;
    unordered_set<int> s;
    for (int i = 0; i < M; i++)
    s.insert(B[i]);
    for (int i = 0; i < N; i++)
    {
        if ((s.find(A[i])) == s.end())
            v.push_back(A[i]);
    }
    return v;
}
int main()
{
    long long A[] = {1, 2, 3, 4, 5, 10};
    long long B[] = {2, 3, 1, 0, 5};
    int N = sizeof(A);
    int M = sizeof(B);
    vector<long long> v = findMissing(A, B, N, M);
    for (long long i : v)
    {
        cout << i << " ";
    }
    return 0;
}