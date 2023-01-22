#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    multiset<int> s;
    for (int a:nums)
    {
        s.insert(a);
    }
    if (nums.size() == 0)
    {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
    count = s.count(nums[i]);
        if (count < 2)
        {
            return nums[i];
        }
    }
    return 0;
}
int main()
{
    vector<int> nums = {4,4,1,2,1,2};
    int res = singleNumber(nums);
    cout << res << endl;
    return 0;
}