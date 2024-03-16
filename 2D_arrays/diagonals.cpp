#include<bits/stdc++.h>

using namespace std;

signed main(){
    
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            cin>>matrix[i][j];
            if(i==j || i==(n-1-j)){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
            cout<<endl; 
        
    }
}