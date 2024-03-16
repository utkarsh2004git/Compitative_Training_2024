// #include<bits/stdc++.h>
// using namespace std;

// signed main(){
//     int n;
//     cin>>n;
//     string s;
//     map<string,int> mymap;

// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_map<string, int> nameCount;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (nameCount.find(name) == nameCount.end())
        {
            nameCount[name] = 1;
            cout << "OK\n";
        }
        else
        {
            int count = nameCount[name]++;
            cout << name << count << "\n";
        }
    }

    return 0;
}