#include <bits/stdc++.h>
#include <algorithm>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (!s1.compare(s2)) cout << "True" << endl;
        else cout << "False" << endl;
    }

    return 0;
}