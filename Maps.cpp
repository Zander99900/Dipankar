#include <bits/stdc++.h>
using namespace std;
// Print function
void Print(map<int, string> &m)
{ // we pass &m here so we wont have to make a copy of original map
    // It is printed using iterator, auto keyword automatically finds out which data type it is
    for (auto &s : m)
    {
        cout << s.first << " " << s.second << endl; // s.first prints they key and s.second prints the value stored in it
    }
}
int main()
{
    map<int, string> m;
    m[1] = "zander";
    m[8] = "zeus";
    m[5] = "beast";

    // Alternative way
    m.insert({2, "prem"});
    m.insert({6, "roma"});
    m.insert({4, "chiku"});
    Print(m);

    // operations like finding and removing element from map
    //  auto it = m.find(5);
    //  if(it == m.end()){
    //      cout << "Not Found" << endl;
    //  }
    //  else
    //  m.erase(5);
    //  cout << it->second << endl;
    // time complexity for insertion is O(log(n)) but it sorts the map, it uses red black tree algo for storing the data used when order is required in answer

    // Unordered Map
    //  unordered_map<int,string> m2;
    //  m2[1] = "zander_unordered";
    //  m2[8] = "zeus_unordered";
    //  m2[5] = "beast_unordered";
    // They use hashtables and time complexity for insertion is O(1) and same for other operations
    //  Print(m2);
    // multimap exists where you can insert element in duplicate keys
    map<int,int> m7;
    vector<int> nums = {4,1,2,1,2};
    for (int i = 0; i < nums.size(); i++)
    {
        m7.insert(i,nums[i]);
    }
    
    return 0;
}