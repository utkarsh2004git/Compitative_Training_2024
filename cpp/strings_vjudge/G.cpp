#include <bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    getline(cin,s);
    int vol=0,con=0,n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<endl;

}