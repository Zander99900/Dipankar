/*  (A*B)%M = ((A%M)*(B%M))%M but the same is not true for A/B%M
in order to find that we use the following steps: 1. if A*B = 1 that means B is multiplicative inverse(1/A) of A
B^(-1) % M is the modular multiplicative inverse of A if (A*B)%M = 1
MMI is defined only if A & M are co-prime
Optimised way: Fermet Theorem (A^(M-1))/M = 1; necessary condition: M is prime, A is not a multiple of M
(A^(M-2)) % M = A^(-1) This can be achieved using Binary Exponentiation with TC: O(Log(n))
*/

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e6 + 10;
int fact[N];
int BinExpIterative(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return ans;
}

/*There are N children and K toffees. K < N, count the number of ways to distribute toffee among N students such that each student get 1 toffee only --> nCk, %M, M = 1e9+7,
N < 10^6, K < N < 1e6, Q queries < 1e5; nck formula : n ! / ((n-k) ! * k !) ** The denominator is calculated using binary exponentiation and we cannot divide in modular expression so we take the inverse and multiply with n ! to find the ans in O(log(n))
*/
int main()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }
    int q; cin >> q;
    while (q--)
    {
        int n, k; cin >> n >> k;
        int ans = fact[n];
        int denominator = (fact[n - k] * 1LL * fact[k]) % M;
        ans = ans * BinExpIterative(denominator, M-2, M);
        cout << ans << endl;
    }
    
    return 0;
}