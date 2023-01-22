// Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.
#include <bits/stdc++.h>
using namespace std;
const int M = 1337;
int BinExpIterative(int a, int b, int m){
    a%= m;
    long long ans = 1;
    while(b>0){
        if (b&1)
        {
            ans = (ans * a)% m;
        }
        a = (a * a)%m;
        b>>= 1;
    }
    return ans;
}

int superPow(int a, vector<int> &b)
{
    int mod_b = 0;
    for (int val : b)
    {
        mod_b = (mod_b * 10 + val) % 1140;
    }
    return BinExpIterative(a, mod_b, M);
}
int main()
{

    return 0;
}