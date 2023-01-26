#include<bits/stdc++.h>
using namespace std;
/* XOR properties:
 1 0 --> 1
 0 1 --> 1
 1 1 --> 0
 0 0 --> 0

 x ^ 0 == x
 x ^ x == 0
*/
int main(){
//Swap using XOR operator
int a = 5, b = 2;
a = a ^ b;
b = b ^ a;
a = a ^ b;

cout << "Value of a is: " << a << " & value of b is: " << b << endl; 

//Given an array of N integers, every element appears even times except one, find the element in O(n) time & O(1) space 
int n; cin >> n;
int x, ans = 0;
for (int i = 0; i < n; i++)
{
    cin >> x;
    ans ^= x;
}
cout << ans << endl;
  
return 0;
}