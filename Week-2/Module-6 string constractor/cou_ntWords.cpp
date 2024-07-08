#include <bits/stdc++.h>
using namespace std;

void recur(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        cout << word << endl;
        recur(ss);
    }
}

int main()
{
    string s;
    getline(cin, s);

    // cout << s;
    stringstream ss(s);
    recur(ss);
    return 0;
}