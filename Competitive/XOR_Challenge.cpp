//This q finds the maximum possible product of a given number for 13 (1101). We can use A=10 ("1010" in binary) and B=7 ("0111" in binary). This gives us the product 70. No other valid pair (A,B) can give us a larger product.

/*XOR PRODUCT: 1^1 -> 0, 0^0 -> 0, 1^0 -> 1, 0^1 -> 1   */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int c ;
    cin >> c;
    int bit_count = (int)log2(c) + 1;
    int a = 0,b = 0;
    vector<int> set_bits;
    for (int i = 0; i < bit_count; i++)
    {
        if (c & (1<<i)) //this is where we find the set bits
        {
            set_bits.push_back(i);
        }
        else{
            a |= (1<<i);
            b |= (1<<i);
        }
    }
    //This is where we find the subsets of unset bits
    long long ans = -1;
    int sz = 1 << set_bits.size();
    for (int  mask = 0; mask < sz; mask++)
    {
        int a_temp = a, b_temp = b; //this will not do any difference in the already set values of a & b
        for (int j = 0; j < set_bits.size(); j++)
        {
            if (mask & (1<<j))
            {
                a_temp |= (1 << set_bits[j]); 
            }
            else
            {
                b_temp |= (1 << set_bits[j]); 
            }
        }
        ans = max(ans, a_temp * 1LL * b_temp);
    }
    cout << ans << endl;
    return 0;
}