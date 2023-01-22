#include<bits/stdc++.h>
using namespace std;

//((a*b)/ GCD) = LCM
//Euclid method includes long division: we make the remainder as divisor & the previous divisor as current dividend until the final remainder becomes 0

int gcd(int a, int b){
    if(b == 0) return a; //if the final remainder is 0, then the previous divisor which became current dividend becomes GCD
    return gcd(b, a%b); //Just interchanging the position of divisor & remainder
} //TC: O(log(n))
int main(){
cout << gcd(12, 4) << endl;
cout << gcd(18, 12) << endl;
cout << 12*18 / gcd(18, 12) << endl;
return 0;
}