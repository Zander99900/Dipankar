#include <bits/stdc++.h>
using namespace std;

// For n Elements, There exists 2ⁿ subsets (represented by typing alt + 252)

vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    int subset_ct = (1 << n); // This is to create 2ⁿ subsets vector
    vector<vector<int>> subsets;
    for (int mask = 0; mask < subset_ct; mask++) //Time complexity is O(2ⁿ)
    {
        // This is where we store the subsets using Bitmasking
        vector<int> subset;
        for (int i = 0; i < n; i++) //Time complexity is O(n)
        {
            if ((mask & (1 << i)) != 0) // Setting the bits of subsets
            {
                subset.push_back(nums[i]); // Setting individual subsets
            }
        }
        subsets.push_back(subset); // Final vector to be returned which contains all subsets
    }
    return subsets;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto all_subsets = subsets(v);
    for(auto subset : all_subsets){
        for(int ele : subset){
            cout << ele << " ";
        }
        cout << endl;
    }
    //Overall TC: O(n * (2ⁿ))
    return 0;
}