#include<bits/stdc++.h>
using namespace std;

int BinExpIterative(int a, int b){
    int ans = 1;
    while(b){
        if (b&1)
        {
            ans = ans * a;
        }
        a = a * a;
        b>>= 1;
    }
    return ans;
}

/* Working of Iterative Method:
    Initially ans = 1,
    the power b is taken in binary
    b    a   ans
    1101 3   3
    110  3^2  3 (3^2 does not contribute)
    11   3^4  3^5
    1    3^8  3^13 (only multiply when last bit is set)

    TC: O(log(n))
*/
int main(){
    int a = 3, b = 13;
    cout << BinExpIterative(a, b) << endl;
    cout << pow(a, b);
return 0;
}