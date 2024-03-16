#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s.compare("yes")==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}