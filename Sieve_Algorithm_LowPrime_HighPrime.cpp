#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> lowPrime(N, 0), highPrime(N, 0);
int main()
{
    // TC: O(log(log(n))) the loop continues only the number of primes
    isPrime[0] = isPrime[1] = false; // since 0 & 1 are not prime so we set them manually
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            lowPrime[i] = highPrime[i] = i;    // Initializing Both low & high prime as i
            for (int j = 2 * i; j < N; j += i) // here we are calculating all the multiples of i and cancelling them so they are not prime
            {
                isPrime[j] = false;
                highPrime[j] = i; // Setting the highest prime everytime a new prime is found
                if (lowPrime[j] == 0)
                {
                    lowPrime[j] = i; // This can be set only once as the initial value of low prime is 0
                }
            }
        }
    }
    // for (int i = 1; i < 100; i++)
    // {
    //     if (isPrime[i])
    //     {
    //         cout << i << " is prime\n";
    //     }
    //     else
    //     {
    //         cout << i << " " << lowPrime[i] << " " << highPrime[i] << endl;
    //     }
    // }

    //TC:O(log(n)) for finding prime factors
    int num;
    cin >> num;
    vector<int> prime_factors;
    while (num > 1)
    {
        int prime_factor = highPrime[num];
        while (num % prime_factor == 0)
        {
            num /= prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    for (int i : prime_factors)
    {
        cout << i << " ";
    }

    return 0;
}