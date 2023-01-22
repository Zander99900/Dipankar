#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
long long arr[N];

int main()
{
    int sum = 0;
    int pile = 1, index = 1, worms;
    int total_size;
    cin >> total_size;
    while (total_size--)
    {
        cin >> worms;
        for (int i = 0; i < worms; i++)
        {
            arr[index] = pile;
            index++;
        }
        pile++;
    }
    int num_pos;
    cin >> num_pos;
    while (num_pos--)
    {
        int m;
        cin >> m;
        cout << arr[m] << endl;
    }
    
    return 0;
}