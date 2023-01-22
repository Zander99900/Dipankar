#include<bits/stdc++.h>
using namespace std; //This method is used to pre-compute primes in optimal way

const int N = 1e7+10;
vector<bool> isPrime(N, 1); // Initializing a vector of size 10^7 with all values as 1 indicating they are all prime nos. 
int main(){
isPrime[0] = isPrime[1] = false; //since 0 & 1 are not prime so we set them manually
for (int i = 2; i < N; i++)
{
    if (isPrime[i] == true)
    {
        for (int j = 2*i; j < N; j+=i) //here we are calculating all the multiples of i and cancelling them so they are not prime
        {
            isPrime[j] = false;
        }
    }
}
for (int i = 1; i < 100; i++)
{
    if (isPrime[i]){cout << i << "  is prime\n"; }
    else{cout << i << "  is not prime\n";}
}
//TC: O(log(log(n))) the loop continues only the number of primes
return 0;
}

/* suppose we need to find the no of primes withing 30, the 1st no is 2 (ignoring 1 and handling it manually) , 
the loop runs until 30 to find which number is a multiple of 2 and all those values are set as 0 indicating not-prime, 
similarly for 3, 5 and so on, if the value is not previously set to 0 then it is a prime no.
*/