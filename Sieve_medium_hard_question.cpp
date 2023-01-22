/*Alex has started hacking websites, and also started learning encryption and decryption of messages. Once he faced an interesting issue, where he needs to decrypt the message in a different way.
Initially, he will be given an array A of N integers, and has to decrypt Q messages. In each message he will get an integer X, and if X can be converted into product of two different or same prime numbers, then the real message is "YES" (without quotes), otherwise the message is "NO" (without quotes).

To convert X, he can choose one element from array say Y (X should be divisible Y), and can divide X by Y any number of times (till X is divisible by Y). Help Alex in decrypting the messages.

input : 4 3
2 22 7 10
16
429
42

output: YES
NO
YES

For X = 16,We can choose 2 from the given array and divide X by 2 , two times, which will result in 4.
As, 4 = 2x2, So answer is YES.

For X = 429, we can't choose any number from the array by using which we can convert X in product of two primes. So answer is NO.

For X = 42,We can choose 2 from the given array and divide X by 2 only one time, which will result in .
As, 21 = 7 x 3. So answer is YES.*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N];
int hp[N]; // to pre-compute the prime factors
int canRemove[N];
int hsh[N];

vector<int> distinctPF(int x)
{ // if 60 has 2x2x3x5 this func will reduce the repiting 2 and only keep one 2
    vector<int> ans;
    while (x > 1)
    {
        int pf = hp[x];
        while (x % pf == 0)
            x /= pf;
        ans.push_back(pf);
    }
    return ans;
}
int main()
{

    for (int i = 2; i < N; i++) // we start this loop from 2 as 0 & 1 are not primes
    {
        if (hp[i] == 0)
        {
            for (int j = i; j < N; j += i)
            {
                hp[j] = i;
            }
        }
    }

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int x; // keeping all the count of elements entered
        cin >> x;
        hsh[x] = 1;
    }

    for (int i = 2; i < N; i++)
    {
        if (hsh[i])
        {
            for (long long j = i; j < N; j *= i)
            {
                canRemove[j] = 1;
            }
        }
    }

    while (q--)
    {
        int x;
        cin >> x;
        vector<int> pf = distinctPF(x); // here we pre-compute the prime - factors and store them

        bool isPossible = false;
        for (int i = 0; i < pf.size(); i++)
        {
            for (int j = i; j < pf.size(); j++)
            {
                int product = pf[i] * pf[j];
                if (i == j && x % product != 0)
                    continue;
                int toRemove = x / product;
                if (canRemove[toRemove] == 1 || toRemove == 1)
                {
                    isPossible = true; // Only here we print Yes and all other cases as no
                    break;
                }
            }
            if (isPossible)
                break; // The result not found
        }
        cout << (isPossible ? "YES\n" : "NO\n");
    }

    return 0;
}