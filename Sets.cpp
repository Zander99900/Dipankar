#include <bits/stdc++.h>
using namespace std;
void Print(multiset<int> &m)
{
    for (auto &s : m)
    {
        cout << s << endl; // s.first prints they key and s.second prints the value stored in it
    }
}
int main()
{
    set<int> s; // ordered set
    s.insert(3);
    s.insert(6);
    s.insert(8);
    s.insert(2);
    s.insert(1);
    // Print(s);

    // unordered_set<int> s2; //ordered set
    // s2.insert(3);
    // s2.insert(6);
    // s2.insert(8);
    // s2.insert(2);
    // s2.insert(1);
    // Print(s2);

    // we can make sets of containers like pair, vector, maps, sets etc but not with unordered because they use hashmaps while ordered uses trees which is the reason behind time complexity difference , ordered -> O(log(n)) UO -> O(1)

    multiset<int> s3;
    s3.insert(3);
    s3.insert(6);
    s3.insert(8);
    s3.insert(2);
    s3.insert(8); // multiset can store duplicates
    Print(s3);
    auto it = s3.find(8);
    if (it != s3.end())
    {
        s3.erase(it); //It only erases the elements first occurence
        Print(s3);
    }
    else
        cout << "Not found" << endl;
    return 0;
}