#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    // stringstream ss(s);
    stringstream ss;
    ss<<s;
    string single_Word;
    // ss >> single_Word;
    // cout << single_Word << endl;
    // ss >> single_Word;
    // cout << single_Word << endl;
    // ss >> single_Word;
    // cout << single_Word << endl;
    // ss >> single_Word;
    // cout << single_Word << endl;

    while (ss >> single_Word)
    {
        cout << single_Word << endl;
    }

    return 0;
}