#include <bits/stdc++.h>
using namespace std;
// To Take array input and then find the no. of multiples of the queries e.g. 2 3 5 7 4 9 is initial array & queries are  4 & 5
const int N = 2e5 + 10;
int hsh[N];
int multiple_ct[N];
int main()
{
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        hsh[x]++; // setting the values at ith places to 1 i.e., hsh[5] = 1 etc here we are using pre-computation
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j+=i)
        {
            multiple_ct[i] += hsh[j]; //This will take the count of input queries using sieve algo in O(log(n)) 
        }
    }
    
    int q;
    cin >> q;
    while (q--)
    {
        int m, n;
        cin >> m >> n;
        long long lcm = m * 1LL * n / __gcd(m, n);
        long ans = multiple_ct[m] + multiple_ct[n];
        if (lcm < N)
            ans -= multiple_ct[lcm]; // this will eliminate the duplicate count if multiple_ct[m] == multiple_ct[n] e.g. 20 is 4 * 5 which is present in both queries so it will -1 count to avoid duplicacy
        cout << ans << endl;
    }
    return 0;
}