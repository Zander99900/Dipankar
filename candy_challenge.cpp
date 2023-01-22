#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int or_size;
        int new_size;
        cin >> or_size >> new_size;
        unordered_set<int> s1;    // for original array
        unordered_set<int> s2;    // for original array
        while (or_size--)
        {
            long long x;
            cin >> x;
            s1.insert(x); // O(log(n))
        }

        while (new_size--)
        {
            long long x;
            cin >> x;
            auto it = s2.find(x);
            if (it == s2.end())
            {
                cout << "NO" << endl;
            }
            cout << "YES" << endl;
            s2.insert(x); // O(log(n))
        }
    }
    return 0;
}