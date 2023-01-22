#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin >> n;
if (n == 1)
{
    cout << 1;
}
bool isPrime = true;
for (int i = 2; i*i <= n; i++)
{
    if (n%i == 0){
        isPrime = false;
        break;
    } 
}
cout << isPrime;
return 0;
// TC :O(sqrt(n))
}