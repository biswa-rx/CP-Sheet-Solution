#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    vector<string> vt;
    while(n--) {
        string temp;
        cin>>temp;
        vt.push_back(temp);
    }

    int ans = 0;

    for(string it: vt) {
        if(it == "++X" or it == "X++"){
            ans++;
        }else {
            ans--;
        }
    }
    cout<<ans<<endl;

   return 0;
}
