#include<bits/stdc++.h>
using namespace std;

//This method is used to store the required elements in bits form
int main(){
    int n; cin >> n;
    vector<int> masks(n, 0);
    for (int i = 0; i < n; i++)
    {
        int num_workers; cin >> num_workers;
        int mask = 0;
        for (int j = 0; j < num_workers; i++)
        {
            int day; cin >> day;
            mask = (mask | (1 << day));
        }
        masks[i] = mask;
    }
    int max_days = 0;
    int person1 =-1, person2 =-1; 
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int intersection = (masks[i] & masks[j]);
            int cmn_days = __builtin_popcount(intersection);
            if (cmn_days > max_days)
            {
                 max_days = cmn_days;
                 person1 = i;
                 person2 = j;
            }
        }
    }

    cout << person1 << " " << person2 << endl;
    
return 0;
}