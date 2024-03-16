#include <bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    getline(cin,s);
    int count=0, n=s.size();
    for(char i:s){
        if(i=='a' ||i== 'e' ||i== 'i' ||i== 'o' ||i== 'u' ||i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
            count++;
        }
    }
    if(count==n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}