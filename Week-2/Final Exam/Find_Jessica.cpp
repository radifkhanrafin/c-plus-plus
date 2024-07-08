#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int value = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            value = 1;
            break;
        }
    }
    value == 1 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}