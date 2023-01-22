#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int n, cows;
int position[N];

bool canPlaceCows(int minDistance){
    int LastPos = -1;
    int cows_ct = cows;
    for (int i = 0; i < n; i++)
    {
        if (position[i] - LastPos >= minDistance || LastPos == -1)
        {
            cows_ct--;
            LastPos = position[i];
        }
        if(cows_ct == 0) break;
    }
     return cows_ct == 0;   
}
int main(){
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> cows;
        for (int i = 0; i < n; i++)
        {
            cin >> position[i];
        }

        sort(position, position+n);
        // T T T T T T T F F F F F F F
        int low = 0, high = 1e9, mid;
        while (high - low >1)
        {
            mid = (low + high) / 2;
            if (canPlaceCows(mid))
            {
                low = mid;
            }
            else{
                high = mid - 1;
            }
        }
        if (canPlaceCows(high)){
            cout << high << endl;
        }
        else  {cout << low << endl;}
    }
    
return 0;
}