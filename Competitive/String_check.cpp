#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin >> test;
while(test--){
    string str1, str2;
    cin >> str1 >> str2;
    int count = 0;
    if (str1.length()>=str2.length()){
        for (int i = 0; i < str2.length(); i++){
            for (int j = 0; j < str1.length(); j++){
                if (str1[j] == str2[i])
                {
                    count++;
                    break;
                }
            } 
        }
    }
    else{
        for (int i = 0; i < str1.length(); i++){
            for (int j = 0; j < str2.length(); j++){
                if (str2[j] == str1[i])
                {
                    count++;
                    break;
                }
            } 
        }
    }
    cout << count << endl;
}
return 0;
}