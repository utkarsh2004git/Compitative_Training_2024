#include <bits/stdc++.h>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<char> v;
        string word;
        cin >> word;
        for (int i = 0; i < word.length(); i++) {
            for (int j = i+1; j < word.length(); j++)
            {
                if (word[i] == word[j])
                {
                    v.push_back(word[i]);
                }
            }
        }

        if (v.size() > 0)
        {
            cout << v[0] << endl;
        }
        else
        {
            cout << "." << endl;
        }
        
    }
    return 0;
}