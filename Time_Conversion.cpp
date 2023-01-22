#include <bits/stdc++.h>
#include <string.h>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int pos = s.find(":");
    string hour = s.substr(0, pos);
    char time_set = s[8];
    string new_time;
    if (time_set == 'A')
    {
        if (hour == "12")
        {
            new_time.push_back('0');
            new_time.push_back('0');
            for (int i = 2; i < s.size() - 2; i++)
            {
                new_time.push_back(s[i]);
            }
            return new_time;
        }
        else
        {
            for (int i = 0; i < s.size() - 2; i++)
            {
                new_time.push_back(s[i]);
            }
            return new_time;
        }
    }

    if (time_set == 'P')
    {
        if (hour == "12")
        {
            for (int i = 0; i < s.size() - 2; i++)
            {
                new_time.push_back(s[i]);
            }
            return new_time;
        }
        else
        {
            int new_hour = stoi(hour);
            new_hour = new_hour + 12;
            string a = to_string(new_hour);
            for (int i = 2; i < s.size() - 2; i++)
            {
                a.push_back(s[i]);
            }
            return a;
        }
    }
};

int main()
{
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout << result << "\n";
    return 0;
}