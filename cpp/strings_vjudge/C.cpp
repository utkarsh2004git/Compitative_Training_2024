#include <bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    char a;
    getline(cin,s);
    cin>>a;
    int oc=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==a){
            oc+=1;
        }
    }
    cout<<oc<<endl;
}
