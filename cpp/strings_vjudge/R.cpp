#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (int(s[i] - '0') < d)
            {
                s.insert(i, to_string(d));
                break;
            }
            else if (i + 1 == n)
            {
                s.append(to_string(d));
            }
         
        }
        cout << s << endl;
    }
    return 0;
}