#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> PrimeFact;
    for (int i = 2; i * i <= n; i++) //This loop runs until the sqrt of n so it only gives the numbers which are present 2 times i.e., 36 = 2*2*3*3 so it will work here
    {
        while (n % i == 0)
        {
            PrimeFact.push_back(i);
            n /= i;
        }
    }
    if (n > 1) //this will print the last leftout prime factor
    {
        PrimeFact.push_back(n); //For those numbers who have a single prime factor eg: 24 = 2*2*2*3, the last 3 won't print if we do not use this condition
    }
    for (int val : PrimeFact)
    {
        cout << val << " ";
    }
    return 0;
}