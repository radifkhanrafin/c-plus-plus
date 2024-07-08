#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    int f_count[26] = {0};
    for (char c : name)
    {
        // cout << c << endl;
        f_count[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i << " " << f_count[i - 'a'] << endl;
    }

    // cout<<name;

    cout << "";
    return 0;
}