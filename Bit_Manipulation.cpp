#include <bits/stdc++.h>
using namespace std;

void PrintBinary(int num)
{
    for (int i = 9; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int normal_method(int a)
{
    int cot = 0;
    while (a > 0)
    {
        if (a & 1 == 1)
        {
            cot++;
        }
        a >>= 1;
    }
    return cot; // Time complexity is O(log(n))
}
int fast_Method(int m)
{
    int count = 0;
    while (m > 0)
    {
        m = m & (m - 1);
        count++;
    }
    return count;
}

int main()
{
    int a = 9;
    int b = a >> 1; // Left shift
    int c = a << 1; // Right Shift
    PrintBinary(a);
    // PrintBinary(b);
    // PrintBinary(c);
    // Set Bit & Unset Bit : Set bit is 1, unset bit is 0, the below program is to check whether ith bit is set or not
    int d = 3;
    if ((a & (1 << d)) != 0)
    {
        cout << "Bit Set" << endl;
    }
    else
    {
        cout << "Bit Not Set" << endl;
    }
    // // To set Bit
    // PrintBinary(a | (1 << d));

    // PrintBinary(~a);
    // // To Unset Bit
    // PrintBinary(a & (~(1 << d))); // The ~ is used to invert all the bits of a number

    // // Toggle The Bits means that if in ith position the bit value is 0 then invert it to 1, This is possible using ^ (XOR) operator

    // PrintBinary(a ^ (1 << d)); // The 3rd bit of 9 is 1 and after using XOR operation, the end result is 0

    // // To count the no of set bits

    // //faster method for bit count
    // int x = 9;
    // cout << normal_method(x) << endl;
    // cout << fast_Method(x) << endl; //Time complexity is O(no. of set bits)
    // //Buit_in Method
    // cout << __builtin_popcount(x);

    //To Check even & odd: Logic every even number 0 in LSB and every odd no has 1 so 0 & 1 = 0 hence the condition fails
    int e = 4;
    if (e & 1)
    {
        cout << "Odd\n";
    }else{
        cout << "Even\n";
    }

    //Multiply & divide using Bits

    int f = 5;
    cout << (f>>1) << endl;    //Divide by 2
    cout << (f<<1) << endl;    //Multiply by 2

    //Conversion between UpperCase & LowerCase
    cout << char('B' | ' ') << endl; //Basically we are toggling the 5th bit to convert the case, ' ' (space) has binary of 00010000
    cout << char('c' & '_') << endl;

    //Clear LSB's
    PrintBinary(59);
    int g = 59;
    int h = 4;
    int i = (g & (~((1<<(h+1))-1)));
    PrintBinary(i);

    //Check Whether a no is power of 2 or not
    int j = 16;
    if (j & (j-1)){ cout << "Not Power of 2" ;}
    else{cout << "Power of 2" ;}
    return 0;
}