#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int n=s.size();
        cout<<s;
        reverse(s.begin(), s.end()); 
        cout<<s<<endl;

    }
}