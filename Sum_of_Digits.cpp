#include<bits/stdc++.h>
using namespace std;
int main(){
//This program will take the input of a number and find out the sum of the digits present in it
    int c;
    cout << "Enter the digit" << endl;
    cin >> c;
    int sum = 0;
    int rem = 0;
    while (c!=0){
        rem = c % 10;
        sum += rem; 
        c = c / 10;
    }
    cout << "Sum of digits is: "<< sum;
return 0;
}