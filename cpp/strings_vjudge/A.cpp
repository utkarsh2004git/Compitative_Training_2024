#include <bits/stdc++.h>
using namespace std;

signed main(){

    string s;
    cin>>s;
    int n=s.size();
    char t;
    for(int i=0;i<(n/2);i++){
        t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
    cout<<s<<endl;
}