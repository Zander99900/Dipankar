#include <bits/stdc++.h>
const int N = 42; //max. constraint given in q
using namespace std;
int main()
{
    int test;
    cin >> test;
        long long int a[N][N]; //To prevent overflow as the triangle made for 42 size exceedes the limitation of integer
        a[0][0] = 1;
        for (int i = 0; i < N; i++)
        { // for n = 2, this loop will run from 0 to 1
            a[i][0] = 1;
            a[i][i] = 1;
            for (int j = 1; j < i; j++){ //for filling middle terms, i.e, the sum of 1st and middle term
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    while (test--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        { // for n = 2, this loop will run from 0 to 1
            for (int j = 0; j <=i; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}