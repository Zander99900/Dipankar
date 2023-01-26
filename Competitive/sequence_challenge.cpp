#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int sum = 1;
        int sequence_size;
        cin >> sequence_size;
        for (int i = 0; i < sequence_size; i++)
        {
            int series_int;
            cin >> series_int;
            sum *= series_int;
        }
        int rem = sum % 10;
        if (rem == 2 || rem == 3 || rem == 5)
        {
            cout << "YES";
        }
        else cout << "NO";
    }
}