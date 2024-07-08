#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int counting[26] = {0};
    for (char c : s)
    {
        counting[c - 'a']++;
        // cout << c << endl;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < counting[i - 'a']; j++)
        {
            cout << i;
        }

        // cout << i << "-" < < < < endl;
    }

    return 0;
}