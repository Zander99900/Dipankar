#include<bits/stdc++.h>
using namespace std;
//This algo breaks the original power calculation in 2 equal halves i.e; 2ⁿ = 2^(n/2) * 2^(n/2) and so on until 2^1 comes out

int BinExpRecursion(int a, int b){
    if (b == 0) {
        return 1;
    }
    long long res = BinExpRecursion(a, b/2);
    if (b&1) //odd number
    {
        return (a*(res * res));
    }else{

        return (res * res);
    }
}

int main(){
    int a = 2, b = 14;
    cout << BinExpRecursion(a, b) << endl;
    cout << pow(a, b);
return 0;
}