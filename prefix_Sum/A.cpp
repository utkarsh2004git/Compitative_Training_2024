#include<bits/stdc++.h>
using namespace std;


signed main(){
    int n,c_z=0,c_o=0;
    cin>>n;
    string s;
    int max_split=0;
    cin>>s;
     for(int i=0;i<n;i++){
        if(s[i]=='1') c_o+=1;
        else c_z+=1;
    }
    if(c_o==c_z){
        cout<<2<<endl<<s.substr(0,1)<<" "<<s.substr(1,(n-1))<<endl;
    }
    else{
        cout<<1<<endl<<s<<endl;
    }
}