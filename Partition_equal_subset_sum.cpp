/*Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.
Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].*/

#include <bits/stdc++.h>
using namespace std;
int dp[205][20005];

bool func(int i, int sum, vector<int> &nums){
    if(sum == 0) return true;
    if(i < 0) return false;
    if(dp[i][sum] != -1) return dp[i][sum];
    //not consider ith term
    int isPossible = func(i-1, sum, nums);
    //consider ith term
    if(sum - nums[i] >= 0)
        isPossible |= func(i-1, sum - nums[i], nums);
    return dp[i][sum] = isPossible;
}

bool canPartition(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum % 2 != 0) return false; //cannot divide in 2 equal halves
    sum = sum/2;
    return func(nums.size() -1, sum, nums);
}
int main()
{
    return 0;
}
