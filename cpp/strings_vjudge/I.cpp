// #include <bits/stdc++.h>
// using namespace std;

// signed main(){
//     string s;
//     getline(cin,s);
//     int count=0;
//     int n=s.size();
//     for(int i=0;i<n;i++){

//     }
// }

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int computePrefixSuffixLength(const string& s) {
    int n = s.length();
    vector<int> lps(n, 0);
    int j = 0;

    for (int i = 1; i < n; ) {
        if (s[i] == s[j]) {
            j++;
            lps[i] = j;
            i++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps[n - 1];
}

int main() {
    string s;
    cin >> s;
    cout << computePrefixSuffixLength(s) << endl;

    return 0;
}
