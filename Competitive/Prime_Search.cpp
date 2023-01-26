#include<bits/stdc++.h>
using namespace std;
char upper(char c){ //upper case - 32
    return 'A' + (c - 'a');
}
char lower(char c){ //lower case +32
    return 'a' + (c - 'A');
}

//convert the given string to its alternative case, if the new string characters are in lowercase then subtract else add, if the final ans is a prime no. then print 1 or print 0
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = upper(s[i]);
        }
        else s[i] = lower(s[i]);
    }
    int result = 0;
        for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            result = result - s[i];
        }
        else result = result - s[i];
    }
    if (result < 0){
        result = result * -1;
    }
    //checking whether the number is prime or not
    int flag = 0;
    for (int i = 2; i < result; i++)
    {
        if (result % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << 1; //The number is prime
    }
    else
    {
        cout << 0; //The no. is not prime
    }
return 0;
}