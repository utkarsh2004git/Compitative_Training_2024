#include<bits/stdc++.h>

using namespace std;

signed main(){
    
    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            cin>>arr[i][j];
        }

    }
    for (int i = 0; i < n; i++)
    {
       for(int j=0;j<i;j++){
           for(int x=0;x<=j;x++){
            cout<<arr[i][x];
           }
       }
        cout<<endl;
    }
}

