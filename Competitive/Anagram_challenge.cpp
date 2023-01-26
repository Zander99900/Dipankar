#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    multiset<int> count;
    multiset<int> count2;
    if (s.size()!= t.size())
    {
        return false;
    }
    else{
    for (int i = 0; i < s.size(); i++)
    {
        count.insert(s[i]);
        count2.insert(t[i]);
    }
    if (count == count2)
    {
        return true;
    }
    else return false;
    }
}
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    bool res = isAnagram(s1, s2);
    cout << res << endl;
    return 0;
}