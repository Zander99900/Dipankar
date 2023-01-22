#include<bits/stdc++.h>
using namespace std;
int main(){
int n = 100;
int r=0,u=0,b=0,y=0; //hash array
int t;
cin >> t;
while(t--){
        string ar;
        cin >> ar;
        for (int i = 0; i < ar.size(); i++)
        {
        if (ar[i] == 'r')
        {
            r++;
        }
        if (ar[i] == 'u')
        {
            u++;
        }
        if (ar[i] == 'b')
        {
            b++;
        }
        if (ar[i] == 'y')
        {
            y++;
        }
        }
    int mini = 0;
    mini = min(min(r,u),min(b,y));
    cout << mini << endl;
}
return 0;
}