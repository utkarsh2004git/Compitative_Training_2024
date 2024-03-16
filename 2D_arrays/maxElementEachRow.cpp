#include<bits/stdc++.h>
using namespace std;

signed main(){
     int n;
     int m;
    cin>>m;
    cin>>n;
    int max;
    vector<vector<int>> matrix(m,vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        max=0;
        for (int j = 0; j < n; j++)
        {   
            cin>>matrix[i][j];
            if(max<matrix[i][j]){
                max=matrix[i][j];
            }
        }
            cout<<max<<endl; 
        
    }

}