// Q. Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

// Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

// Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.

// Input:
// 4 7
// 20 15 10 17

// Output:
// 15
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n;
long long wood_needed;
long long tree[N];
bool isHeightQualified(int h)
{
    long long total_wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (tree[i] >= h)
        {
            total_wood += (tree[i] - h);
        }
    }
    return total_wood >= wood_needed; // if total no of woods is greater than or equal to wood needed then it will return true else false
}
int main()
{
    cin >> n >> wood_needed;
    for (int i = 0; i < n; i++)
    {
        cin >> tree[i];
    }
    // predicate funstion looks like this: T T T T T F F F F F F,  we need to find the last true value
    long long low = 0, high = 1e9, mid;
    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (isHeightQualified(mid))
        {
            low = mid;
        }
        else
        {
            high = mid - 1; // In case mid value is false
        }
    }
    // here we are performing binary search to find the last count where the predicate funcn is true
    if (isHeightQualified(high))
    {
        cout << high << endl;
    }
    else
    {
        cout << low << endl;
    }
    return 0;
}
