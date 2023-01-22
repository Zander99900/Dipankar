#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // for normal vectors
        // cout << v[i].first << " " << v[i].second << endl; for vector of pairs
    }
    cout << endl;
}
int main()
{
    //1. Normal vector
    // vector<int> v; //It is basically an array whose size can be modified
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x); //Inserting elements in array
    // }

    //2. Adding same vale all at once
    // vector<int> v2(10, 3); //It is a vector of 10 size with element 3 inserted at every index
    
    //3. Direct value add
    vector <int> v3 = {3,4,5,1,2}; 
    vector <int> v8(2);
    v8 = v3;
    printVec(v8);
    // pair<int, int> p; //It is a data type which stores a pair of data
    // p.first = 5;
    // p.second = 10; //Manual setting values

    //4. Vector of Pair
    // vector<pair<int, int>> v4;
    // int n2;
    // cin >> n2;
    // for (int i = 0; i < n2; i++)
    // {
    //     int x,y;
    //     cin >> x >> y;
    //     v4.push_back({x,y}); //Inserting pairs in vector
    // }
    // printVec(v4);

    //5. Vector of vector
    // vector<vector<int>> v5;
    // int N;
    // cin >> N;
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> temp;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x); 
    //     }
    //     v5.push_back(temp);
    // }
    // for (int i = 0; i < v5.size(); i++)
    // {
    //     printVec(v5[i]);
    // }

    //Iterators
    // vector <int> v6 = {3,4,5,1,2};
    // vector <int> ::iterator it = v6.begin();
    // cout << ((*it+1)) << endl; //Accessing the address of an element in vector

    //Iterators for vector of pair
    // vector<pair<int,int>> v_pair = {{1,2}, {2,3}, {3,4}};
    // vector<pair<int,int>> :: iterator it2;
    // for (it2 = v_pair.begin(); it2 != v_pair.end(); it2++)
    // {
    //     cout << (*it2).first << " " << (*it2).second << endl;
    // }
    // //Alternative way
    // for (it2 = v_pair.begin(); it2 != v_pair.end(); it2++)
    // {
    //     cout << (it2->first) << " " << (it2->second) << endl;
    // }
    return 0;
}