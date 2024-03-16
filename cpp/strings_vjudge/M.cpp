#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    string s;
    cin>>s;
    set <char> s1;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(char i :s){
        s1.insert(i);
    }
    if(s1.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}