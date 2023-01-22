#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;
//This Program is using Baktracking
void generate(vector<int> &subset, int i, vector<int> &nums)
{

    if (i == nums.size())
    {
        subsets.push_back(subset);
        return;
    }
    // ith index not in subset
    generate(subset, i + 1, nums);

    // ith index in subset
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}
int main()
{
    int size;
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    vector <int> empty;
    generate(empty, 0 , nums);
    for ( auto subset: subsets)
    {
        for (auto ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}