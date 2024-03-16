#include <bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    string s2="";
    getline(cin,s);
    int count=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            s2+=s[i];
            s2+=to_string(count+1);
            count=0;
        }
    }
    cout<<s2<<endl;
}