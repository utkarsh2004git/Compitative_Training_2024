#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
   int t;
   cin>>t;
   string s;
   while(t--){
    cin>>s;
    int len=s.size();
    if(len>10){
        cout<<s[0]<<len-2<<s[len-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
   }
    return 0;
}