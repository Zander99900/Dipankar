#include<bits/stdc++.h>
using namespace std;
    string s;
int main(){
    int N = 1e4 ;
    int t;
    cin >> t;
    int a , b, key, arr[N];
    while(t--){
    cin >> a >> b >> key;
    arr[0] = a;
    for (int i = 0; i < N; i++)
    {
        arr[i+1] = arr[i] + b;
    }
    for (int i = 0; i < N; i++)
    {
        string s1 = to_string(arr[i]);
        s = s + s1;
    }
    char res = s[key];
    cout << res << endl;
    }
return 0;
}