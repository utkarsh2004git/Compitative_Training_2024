#include <bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    getline(cin,s);
    int vol=0,con=0;
    for(char i:s){
        if(i=='a' ||i== 'e' ||i== 'i' ||i== 'o' ||i== 'u' ||i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
            vol++;
        }

        else if(i==' '){
            continue;
        }
        else{
            con++;
        }
    }
    cout<<vol<<" "<<con<<endl;
}