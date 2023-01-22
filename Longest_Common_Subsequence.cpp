/*Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".

A common subsequence of two strings is a subsequence that is common to both strings.
Example 1:

Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The longest common subsequence is "ace" and its length is 3.
*/

#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int lcs(int i, int j, string &s1, string &s2){
    if(i < 0 || j < 0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    //remove 1 char from s1
    int ans = lcs(i-1, j, s1, s2);
    //remove 1 char from s2
    ans = max(ans, lcs(i, j-1, s1, s2));
    //remove 1 char from s1 & s2
    ans = max(ans, lcs(i-1, j-1, s1, s2) + (s1[i] == s2[j])); //the last condition will check whether the end values are same or not, if same then it will add 1 to ans

    return dp[i][j] = ans;
}

int longestCommonSubsequence(string text1, string text2)
{
    memset(dp, -1, sizeof(dp));
    return lcs(text1.size() -1, text2.size() -1, text1, text2);
}
int main()
{
    return 0;
}