#include <bits/stdc++.h>
using namespace std;

vector<string> final;
void generate(string &s, int open, int close)
{
    //Base condition
    if (open == 0 && close == 0)
    {
        final.push_back(s);
        return;
    }
    
    if (open > 0)
    {
        s.push_back('(');
        generate(s, open - 1, close);
        s.pop_back(); //This is used to undo the change so the previous function call does not get the chsnges made in this
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            generate(s, open, close - 1);
            s.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string s;
    generate(s ,n ,n);
    for (auto i : final)
    {
        cout << i << endl;
    }
    return 0;
}