#include<bits/stdc++.h>
using namespace std;

// signed main(){
//     int t;
//     cin>>t;
//     int n,k;
//     while(t--){
//         cin>>n>>k;
//         vector<int>arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//     }

// }

int main() {
    int T;
    cin >> T; 

    while(T--) {
        int N, K;
        cin >> N >> K;

        vector<int> girls(N);

        for(int i = 0; i < N; ++i) {
            cin >> girls[i];
        }

        int maxGirls = 0, currentGirls = 0;
        for(int i = 0; i < K; ++i) {
            currentGirls += girls[i];
        }
        maxGirls = currentGirls;

        for(int i = K; i < N; ++i) {
            currentGirls += girls[i] - girls[i - K];
            maxGirls = max(maxGirls, currentGirls);
        }

        cout << maxGirls << endl;
    }

    return 0;
}