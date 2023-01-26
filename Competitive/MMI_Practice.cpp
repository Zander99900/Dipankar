#include <bits/stdc++.h>
using namespace std;
// KCN means K ways in which n symbols can be printed
//  KCN = K! / ((K - N)! * N !)
// TYPES OF WAYS TO REPRESENT A, B, C -> 3 * 2 * 1 = 6
// Alphabet -> K Symbols -> N size password, every alphabet can be used once only K>N

const int M = 1e9 + 7;
const int X = 1e5 + 10;
int fact[X];
int BinExp(int a, int b, int m)
{
    int result = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            result = (result * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    cout << result << endl;
    return result;
}
int main()
{
    int test;
    cin >> test;
    fact[0] = 1;
    for (int i = 1; i < X; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M; // code to calculate factorial
    }

    int ans = fact[X];
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        ans = (ans * 1LL * fact[k]) % M; //
        int denominator = (fact[k - n] * 1LL * fact[n]) % M;
        ans = (ans * 1LL * BinExp(denominator, M - 2, M)) % M;
    }
    cout << ans << endl;

    return 0;
}