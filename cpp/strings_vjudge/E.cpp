#include <bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    getline(cin,s);
    int count=0, n=s.size();
    for(char i:s){
        if(i=='1' ||i== '2' ||i== '3' ||i== '4' ||i== '5' ||i=='6' || i=='7' || i=='8' || i=='9' || i=='0'){
            count++;
        }
        else{
            break;
        }
    }
    if(count==n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}