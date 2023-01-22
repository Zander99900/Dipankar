#include<bits/stdc++.h>
using namespace std;
    bool containsDuplicate(vector<int>& nums) {
        multiset<int> new_num;
        for (int i = 0; i < nums.size(); i++)
        {
            new_num.insert(nums[i]);
        }
        for (int j = 0; j < nums.size(); j++)
        {
            if (new_num.count(nums[j])>1)
            {
                return true;
            }
            else return false;
        }
    }
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 1, 7, 8, 9, 6};
    bool res = containsDuplicate(nums);
    cout << res << endl;
return 0;
}