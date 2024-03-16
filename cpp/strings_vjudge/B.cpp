#include <bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=1;i<n;i=i+2){
        cout<<s[i];
    }
    for(int i=0;i<n;i=i+2){
        cout<<s[i];
    }
    cout<<endl;
}
