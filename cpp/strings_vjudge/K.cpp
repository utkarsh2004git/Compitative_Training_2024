// #include <bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// signed main(){
//     string s;
//     int t;
//     cin>>t;
//     while(t--){
//         int vol=0,con=0,sp=0;
//         getline(cin,s);
//         for(char i:s){
//             if(i=='a' ||i== 'e' ||i== 'i' ||i== 'o' ||i== 'u' ||i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
//                 vol++;
//             }

//             else if(i==' ' ){
//                 sp++;
//             }
//             else{
//                 con++;
//             }
//         }
//         cout<<sp<<" "<<vol<<" "<<con<<endl;
//     }
// }


#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void countWordsVowelsConsonants(const string &sentence)
{
    int wordCount = 0, vowelCount = 0, consonantCount = 0;
    bool inWord = false;

    for (char c : sentence)
    {
        if (c == ' ')
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
            if (isalpha(c))
            {
                if (isVowel(c))
                {
                    vowelCount++;
                }
                else
                {
                    consonantCount++;
                }
            }
        }
    }

    cout << wordCount << " " << vowelCount << " " << consonantCount << endl;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string sentence;
        getline(cin, sentence);

        countWordsVowelsConsonants(sentence);
    }

    return 0;
}