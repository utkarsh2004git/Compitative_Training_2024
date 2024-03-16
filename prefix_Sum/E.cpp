

// #include<bits/stdc++.h>
// #define int long long
// using namespace std;

// signed main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n),arr2(n);
//     int sum=0;
//     for(int i=0;i<n;i++){
//          cin>>arr[i];
//          arr2[i]=arr[i];
//          sum+=arr[i];
//     }
//     int m,l,r,t;
//     int sum2=0;
//     sort(arr2.begin(),arr2.end());
//     cin >> m; 
//     while(m--){
//         cin>>l>>r>>t;
//         if(t==1){
//             cout<<sum<<endl;
//         }
//         else{
//             for(int i=l-1;i<=r;i++){
//                 sum2+=arr2[i];
//             }
//             cout<<sum2<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> A(n), B(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B.begin(), B.end());
    for (int i = 1; i < n; ++i)
    {
        A[i] += A[i - 1];
        B[i] += B[i - 1];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        --l;
        if (type == 1)
        {
            cout << (l == 0 ? A[r - 1] : A[r - 1] - A[l - 1]) << "\n";
        }
        else
        {
            cout << (l == 0 ? B[r - 1] : B[r - 1] - B[l - 1]) << "\n";
        }
    }
    return 0;
}