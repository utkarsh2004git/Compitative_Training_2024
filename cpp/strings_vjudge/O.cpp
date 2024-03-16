#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
   int t;
   cin>>t;
   string s;
   string mys="codeforces";
   while(t--){
    cin>>s;
    int len=s.size();
    int count=0;
    for(int i=0;i<len;i++){
        if(s[i]!=mys[i]){
            count++;
        }
    }
    cout<<count<<endl;
   }
    return 0;
}