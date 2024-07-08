#include <bits/stdc++.h>
using namespace std;

void pf(stringstream& ss)
{
    string word;
    if (ss >> word)
    {
        pf(ss);
        cout << word << endl;
    }
}

int main()
{
    string a;
    getline(cin, a);

    // cout << a << endl;
    stringstream ss(a);

    pf(ss);

    return 0;
}