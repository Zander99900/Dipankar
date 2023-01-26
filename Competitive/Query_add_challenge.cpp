#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int pf[N]; //this array stores the sum of the previous elements of the original array
int main(){
    long long sum = 0;
    int array_size;
    cin >> array_size;
    for (int i = 1; i <=array_size; i++){
        cin >> a[i];
        pf[i] = pf[i-1] + a[i]; //a[i] is added with the previous element
    }
    int query;
    cin >> query;
    while (query--)
    {
        int l,r;
        cin >> l >> r;
        cout << pf[r] - pf[l-1] << endl;
    }
return 0;
}