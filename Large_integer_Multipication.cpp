#include <bits/stdc++.h>
using namespace std;
const long long int M = 1e18 + 7;
long long BinMultiply(long long a, long long b)
{
    long long ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}
int BinExpIterative(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = BinMultiply(ans, a);
        }
        a = BinMultiply(a, a);
        b >>= 1;
    }
    return ans;
}

/* Working of BinMultiply Method:
    Initially ans = 0,
    the multiplier b is taken in binary
    b    a   ans
    1101 3    3 + 0 
    110  3*2  3 (3*2 does not contribute)
    11   3*4  3*4 + 3
    1    3*8  3*8 + 3*5 (only add when last bit is set)

    TC: O(log^2(n))
*/
int main()
{
    int a = 3, b = 13;
    cout << BinExpIterative(a, b) << endl;
    return 0;
}