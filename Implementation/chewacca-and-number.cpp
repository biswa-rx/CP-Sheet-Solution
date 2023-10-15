#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string str;

    cin>>str;

    string ans = str;

    for(int i = 0; i < str.size(); i++){
        if(i==0 and str[i]=='9'){
            continue;
        }

        if(str[i]>='5'){
            str[i] = '0'+('9' - str[i]);
        
        }
    }

    cout<<str<<endl;

   return 0;
}
