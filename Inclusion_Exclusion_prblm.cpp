// There are N children in his class. Monk is given the list of names of the students. Help Monk find the number of ways in which he can choose the musketeers, such that the names of the three children have atleast a vowel in common i.e. the names must have atleast one of ('a', 'e', 'i', 'o', 'u') in common. Two ways are considered different only if atleast one of the chosen student is different.
/*2
5
helen
irena
arthos
pentos
tulu
3
alen
bira
cult        0 no common vowels  e appears the most i.e., 3 times and there is only 1 way to form three musketeers so ans = 1*/
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

vector<string> subsets(string s)
{
    int sz = 1 << s.size();
    vector<string> ans1; // we will store this and return
    for (int mask = 0; mask < sz; mask++)
    {
        string subset;
        for (int bit = 0; bit < s.size(); bit++)
        {
            if (mask & (1 << bit))
                subset.push_back(s[bit]); // if the bit is set
        }
        if (subset.size())
        {
            ans1.push_back(subset);
        }
    }
    return ans1;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        string str[size];
        for (int i = 0; i < size; i++)
        {
            cin >> str[i];
        }
        unordered_map<string, int> hsh;
        for (int i = 0; i < size; i++)
        {
            set<char> distinct_vowel;
            for (char ch : str[i])
            {
                if (isVowel(ch))
                {
                    distinct_vowel.insert(ch); // if it is a distinct vowel
                }
            }
            string vowel_str;
            for (char ch : distinct_vowel)
                vowel_str.push_back(ch);
            vector<string> all_subsets = subsets(vowel_str);
            for (string vowel_subset : all_subsets)
            {
                hsh[vowel_subset]++; // hashing all the positions in hsh map
            }
        }

        // setting the final ans
        long long ans = 0;
        for (auto &pr : hsh)
        {
            if (pr.second < 3)
                continue;
            long long ct = pr.second;
            long long ways = (ct * (ct - 1) * (ct - 2)) / 6; // NC3 formula
            if (pr.first.size() % 2 == 0)
                ans -= ways; // exclusion
            else
                ans += ways; // inclusion
        }
        cout << ans << "\n";
    }
    return 0;
}