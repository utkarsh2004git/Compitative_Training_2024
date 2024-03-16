#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int q,i,j;
    cin>>q;
    while(q--){
        int sum=0;
        cin>>i>>j;
        for(int x=i;x<=j;x++){
            sum+=arr[x];
        }
        cout<<sum<<endl;
    }
}