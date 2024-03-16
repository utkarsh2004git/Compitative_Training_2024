// #include<bits/stdc++.h>
// using namespace std;

// signed main(){
//     int t;
//     cin>>t;
//     string check="YES";
//     while(t--){
//         int n;
//         string s;
//         cin>>n;
//         cin>>s;
//         int count=0;
//         int m=0,e=0,o=0,w=0;
//         transform(s.begin(),s.end(),s.begin(),::tolower);
//         for(int i=0;i<n;i++){
//             if(s[i]=='m'||s[i]=='e' || s[i]=='o' || s[i]=='w'  ){
//                 if( s[i]=='m'){m++;}    
//                 if( s[i]=='e'){e++;}    
//                 if( s[i]=='o'){o++;}    
//                 if( s[i]=='w'){w++;}    
//                 count++;
//             }
//         }
//         if(count==n && m>0 && e>0 && o>0 && w>0){
//         cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }

// }   

#include<bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int m=0, e=0, o=0, w=0,count=0;
        for(int i=0; i<n; i++) {
            char c = tolower(s[i]);
            if(c == 'm') m++;
            else if(c == 'e') e++;
            else if(c == 'o') o++;
            else if(c == 'w') w++;
            else{

                count++;
                break;
            }
        }
        if(count==0 && m > 0 && e > 0 && o > 0 && w > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
