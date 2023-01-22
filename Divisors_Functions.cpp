#include <bits/stdc++.h>
using namespace std;
// Calculating all divisors and sum of them in O(sqrt(n)) TC
const int N = 1e4 + 10;
vector<int> divisors[N];
int main()
{
    // Method 1. TC: O(sqrt(n))
    // int n;
    // cin >> n;
    // int ct = 0, sum = 0;

    //  for (int i = 1; i*i <= n; i++){
    //      if (n%i == 0) //If i is divisible
    //      {
    //          cout << i << " " << n/i << endl;
    //          ct += 1;
    //          sum += i;
    //          if (n/i != i)
    //          {
    //              sum += n / i;
    //              ct += 1;
    //          }
    //      }
    //  }
    //  cout << ct << " " << sum << endl;

    // Method 2. TC: O(log(n)), sieve algorithm
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            divisors[j].push_back(i);
        }
    }

    // Testing for 1st 10 integers
    for (int i = 0; i < 10; i++)
    {
        for (int div : divisors[i])
        {
            cout << div << " ";
        }
        cout << endl;
    }

    return 0;
}